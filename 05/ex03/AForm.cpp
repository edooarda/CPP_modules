/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:18 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 18:58:00 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default") , grade_required_sign(1) , grade_required_execute(1)
{
    std::cout << "AForm Created" << std::endl;
    this->is_signed = false;
}

AForm::AForm(std::string name, int sign_grade, int execute_grade) : name(name) , grade_required_sign(sign_grade) , grade_required_execute(execute_grade)
{
    if (sign_grade < 1 || execute_grade < 1)
        throw GradeTooHighException();
    else if (sign_grade > 150 || execute_grade > 150)
        throw GradeTooLowException();
    this->is_signed = false;
    std::cout << "** AForm " << name << " created and waiting to be signed. **"<< std::endl;
}

AForm::AForm(const AForm &other) : name(other.name) , grade_required_sign(other.grade_required_sign), grade_required_execute(other.grade_required_execute)
{
    std::cout << "Cpy Constructor" << std::endl;
    this->is_signed = other.is_signed;
}

AForm& AForm::operator=(const AForm &other)
{
    std::cout << "Cpy Operator constructor" << std::endl;
    if(this != &other){
        this->is_signed = other.is_signed;
    }
    return (*this);
}

AForm::~AForm()
{
    std::cout << "** AForm destroid! **" << std::endl;
}

std::string AForm::getName() const {
    return (this->name);
}

int AForm::getGradeToSign() const {
    return (this->grade_required_sign);
}

int AForm::getGradeToExecute() const {
    return (this->grade_required_execute);
}

bool AForm::isFormSigned() const {
    return (this->is_signed);
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high! This Bureaucrat doesn't have time for this form.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low! This Bureaucrat is not important enough.");
}

const char* AForm::NotSignedException::what() const throw()
{
    return ("It need to be signed first, to be executed! Find someone high enough to sign this!");
}

void AForm::beSigned(const Bureaucrat& person)
{
    if (person.getGrade() > this->grade_required_sign)
        throw GradeTooLowException();
    else
        this->is_signed = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->isFormSigned())
        throw NotSignedException();
    else if (executor.getGrade()> this->grade_required_execute)
        throw GradeTooLowException();
    else
        this->executeit();
}

std::ostream& operator<<(std::ostream& outstream, AForm const& object)
{
    outstream << "Form name: " << object.getName() <<
    "\nGrade required to sign: " << object.getGradeToSign() <<
    "\nGrade required to execute: " << object.getGradeToExecute() <<
    "\nIt is: " << (object.isFormSigned() ? "signed" : "unsigned") << std::endl;
    return (outstream);
}
