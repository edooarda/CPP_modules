/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:29 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/20 13:10:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat god("God", 1);
    Intern humanity;
    AForm* paperwork;

    paperwork = humanity.makeForm("ShrubberyCreationForm", "Eden");

    try{
        god.signForm(*paperwork);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try{
        god.executeForm(*paperwork);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete paperwork; // not need anymore

    paperwork = humanity.makeForm("RobotomyRequestForm", "Marvin");
    try{
        god.signForm(*paperwork);
        god.executeForm(*paperwork);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete paperwork;

    paperwork = humanity.makeForm("PresidentialPardonForm", "Arthur");
    try{
        god.signForm(*paperwork);
        god.executeForm(*paperwork);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    delete paperwork;

    paperwork = humanity.makeForm("PLANET DESTRUCTION", "HELP");
}