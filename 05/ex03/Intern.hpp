/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/20 11:12:36 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/20 13:08:19 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:

    public:
        Intern();
        Intern& operator=(const Intern& other) = default;
        Intern(const Intern& other) = default;
        ~Intern();

        AForm* makeForm(const std::string &name_Form, const std::string &target_form);
};

#endif