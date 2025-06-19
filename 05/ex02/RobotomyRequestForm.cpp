/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:37:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 18:37:43 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default") 
{
    std::cout << "***RobotomyRequestForm Default created***" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "***RobotomyRequestForm created***" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
{
    std::cout << "Cpy Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "***RobotomyRequestForm EXTERMINETED***" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::executeit() const
{
    std::cout << "BZZZZZ... *drilling noises* 🤖🔧" << std::endl;
    std::srand(time(0));

    int randomNum = std::rand() % 2;

    if (randomNum == 0)
    {
        std::cout << "OH NO, " << this->target << " is a Cyberman now! RUN!" << std::endl;
    }
    else
    {
        std::cout << "Ops, you tried to turn " << this->target << " into a Cyberman, but Doctor arrived!!!" << std::endl;
    }

}