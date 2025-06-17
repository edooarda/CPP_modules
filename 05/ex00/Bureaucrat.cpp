#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default") , grade(150) 
{
    std::cout << "Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) , grade(grade)
{
    std::cout << "---Welcome to the Work---" << std::endl;
    std::cout << "It is " << name << "'s first day at work." << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "Cpy Operator Construct" << std::endl;
    if (this != &other)
    {
        this->grade = other.grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    std::cout << "Cpy Constructor" << std::endl;
    this->grade = other.grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "--- Work Day Finished! ---" << std::endl;
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        this->grade = 1;
        throw GradeTooHighException();
    }
    else if (grade > 150){
        this->grade = 150;
        throw GradeTooLowException();
    }
    else
        this->grade = grade;
}

void Bureaucrat::increment_grade()
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    else
    {
        std::cout << this->getName() << " was promoted! Congrats, good job!" << std::endl;
        --this->grade;
    }
}

void Bureaucrat::decrement_grade()
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    else
    {
        std::cout << this->getName() << " was demoted. Try to do a better job next time." << std::endl;
        ++this->grade;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high! It cannot be lower than 1, one is THE Boss!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low! It cannot be bigger than 150... It is impossible to be lower than an intern...");
}

std::ostream& operator<<(std::ostream& outstream, Bureaucrat const& object)
{
    outstream << object.getName() << ", bureaucrat grade " << object.getGrade() << "." << std::endl;
    return (outstream);
}