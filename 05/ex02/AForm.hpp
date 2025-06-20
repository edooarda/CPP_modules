/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:23 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/20 12:33:30 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        bool is_signed;
        const int grade_required_sign;
        const int grade_required_execute;

    public:
        AForm();
        AForm(const std::string name, int sign_grade, const int execute_grade);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        virtual ~AForm();

        std::string getName() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        bool isFormSigned() const;

        void beSigned(const Bureaucrat& person);
        void execute(Bureaucrat const & executor) const;

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
        class NotSignedException : public std::exception
        {
            public:
            const char* what() const throw();
        };

        virtual void executeit() const = 0;
    };

std::ostream& operator<<(std::ostream& outstream, AForm const& object);

#endif