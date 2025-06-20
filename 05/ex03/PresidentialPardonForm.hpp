/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:36:31 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 18:31:23 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        const std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other) = delete; // it cannot be used because target is const
        ~PresidentialPardonForm();
        
        std::string getTarget() const;
        void executeit() const override;
};

#endif