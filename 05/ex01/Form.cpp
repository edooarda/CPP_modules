/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:18 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 13:19:19 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default") , grade_required_sign(1) , grade_required_execute(1)
{
    std::cout << "Form Created" << std::endl;
    this->is_signed = false;
}

Form::Form(std::string name, int sign_grade, int execute_grade) : name(name) , grade_required_sign(sign_grade) , grade_required_execute(execute_grade)
{
    if (sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
    this->is_signed = false;
    std::cout << "** Form " << name << " created and waiting to be signed. **"<< std::endl;
}

Form::Form(const Form &other) : name(other.name) , grade_required_sign(other.grade_required_sign), grade_required_execute(other.grade_required_execute)
{
    std::cout << "Cpy Constructor" << std::endl;
    this->is_signed = other.is_signed;
}

Form& Form::operator=(const Form &other)
{
    std::cout << "Cpy Operator constructor" << std::endl;
    if(this != &other){
        this->is_signed = other.is_signed;
    }
    return (*this);
}

Form::~Form()
{
    std::cout << "** Form destroid! **" << std::endl;
}

std::string Form::getName() const {
    return (this->name);
}

int Form::getGradeToSign() const {
    return (this->grade_required_sign);
}

int Form::getGradeToExecute() const {
    return (this->grade_required_execute);
}

bool Form::isFormSigned() const {
    return (this->is_signed);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high! This Bureaucrat doesn't have time for this form.");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low! This Bureaucrat is not important enough.");
}

void Form::beSigned(const Bureaucrat& person)
{
    if (person.getGrade() > this->grade_required_sign)
        throw GradeTooLowException();
    else
        this->is_signed = true;

}

std::ostream& operator<<(std::ostream& outstream, Form const& object)
{
    outstream << "Form name: " << object.getName() <<
    "\nGrade required to sign: " << object.getGradeToSign() <<
    "\nGrade required to execute: " << object.getGradeToExecute() <<
    "\nIt is: " << (object.isFormSigned() ? "signed" : "unsigned") << std::endl;
    return (outstream);
}
