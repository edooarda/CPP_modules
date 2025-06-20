/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:36:25 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 18:32:51 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Default") 
{
    std::cout << "***PresidentialPardonForm Default created***" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "***PresidentialPardonForm created***" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
{
    std::cout << "Cpy Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "***PresidentialPardonForm Burned***" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::executeit() const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}