/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:29 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 19:04:25 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Valid
    Bureaucrat god("God", 1);

    ShrubberyCreationForm shrub("Eden");
    RobotomyRequestForm robot("Marvin");
    PresidentialPardonForm person("Arthur");

    try{
        god.signForm(shrub);
        god.signForm(robot);
        god.signForm(person);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try{
        god.executeForm(shrub);
        god.executeForm(robot);
        god.executeForm(person);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "----------------" << std::endl;

    Bureaucrat blob("Blob", 150);

    ShrubberyCreationForm shrub1("garden");
    RobotomyRequestForm robot1("roboto");
    PresidentialPardonForm person1("Someone");

    try{
        blob.signForm(shrub1);
        blob.signForm(robot1);
        blob.signForm(person1);
        blob.executeForm(shrub1);
        blob.executeForm(robot1);
        blob.executeForm(person1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    blob.setGrade(5);
    std::cout << "----------------" << std::endl;
    try{
        blob.signForm(shrub1);
        blob.signForm(robot1);
        blob.signForm(person1);
        blob.executeForm(shrub1);
        blob.executeForm(robot1);
        blob.executeForm(person1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << shrub1 << std::endl;
    std::cout << robot1 << std::endl;
    std::cout << person1 << std::endl;

    try{
        shrub1.execute(blob);
        robot1.execute(blob);
        person1.execute(blob);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try{
        blob.executeForm(shrub1);
        blob.executeForm(robot1);
        blob.executeForm(person1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << shrub1 << std::endl;
    std::cout << robot1 << std::endl;
    std::cout << person1 << std::endl;

    std::cout << "----------------" << std::endl;
    Bureaucrat juvenal("Juvenal", 78);
    ShrubberyCreationForm tree("Somewhere");
    try{
        juvenal.executeForm(tree);
        juvenal.executeForm(shrub1);
        juvenal.executeForm(robot1);
        juvenal.executeForm(person1);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

}