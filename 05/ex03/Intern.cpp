/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/20 11:12:41 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/20 13:10:45 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Cheap labor, Ops, INTERN was created" << std::endl;
}
Intern::~Intern(){
    std::cout << "The Intern return home." << std::endl;
}

AForm *create_shrub(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *create_robotomy(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

AForm *create_presidential(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string &name_form, const std::string &target_form)
{
    AForm *new_form;

    const std::string form_names[] = { "PresidentialPardonForm" , "RobotomyRequestForm" , "ShrubberyCreationForm" };
    AForm* (*form_framework[])(const std::string &) = { &create_presidential, &create_robotomy, &create_shrub };

    for (int i = 0; i < 3; i++)
    {
        if (form_names[i] == name_form)
        {
            std::cout << "  Intern creates " << name_form << std::endl;
            new_form = form_framework[i](target_form);
            return (new_form);
        }
    }
    std::cerr << "The Intern could not prepare " << name_form << ". This is not a valid Form Requisition." << std::endl;
    new_form = nullptr;
    return (new_form);
}