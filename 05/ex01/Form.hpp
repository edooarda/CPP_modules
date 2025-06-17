#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool is_signed;
        const int grade_required_sign;
        const int grade_required_execute;

    public:
        Form();
        Form(const std::string name, int sign_grade, const int execute_grade);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool isFormSigned() const;

        void beSigned(const Bureaucrat& person);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& outstream, Form const& object);

#endif