/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:19:29 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 13:19:30 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Valid
    Bureaucrat arlindo("Arlindo", 15);
    Form wedding("Wedding", 20, 20);

    try{
        arlindo.signForm(wedding);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << wedding << std::endl;

    std::cout << "------------------" << std::endl;

    // Demotion
    arlindo.setGrade(150);
    std::cout << arlindo << std::endl;
    Form order42("Order 42", 150, 150);
    std::cout << order42 << std::endl;

    try{
        arlindo.signForm(order42);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n" << order42 << std::endl;

    // not priviledged
    Form order666("Order 666", 1, 1);

    try{
        arlindo.signForm(order666);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "\n" << order666 << std::endl;

    // Try to create a form invalid
    try{
        Form driverLicense("Driver License", -50, 50);
    }
    catch(std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Get

    std::cout << "Form: " << wedding.getName() << " grades: " << wedding.getGradeToSign() << " and " << wedding.getGradeToExecute();
    if (wedding.isFormSigned())
        std::cout << " and it is signed";
    else
        std::cout << " and it is unsigned";
    std::cout << std::endl;
}