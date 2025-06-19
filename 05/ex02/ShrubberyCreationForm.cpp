/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/19 13:37:48 by edribeir      #+#    #+#                 */
/*   Updated: 2025/06/19 17:46:09 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default")
{
    std::cout << "***ShrubberyCreationForm Default created***" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    std::cout << "***ShrubberyCreationForm created***" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
    std::cout << "Cpy Constructor" << std::endl;
}

// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) // it cannot copy 
// {
//     std::cout << "Cpy Operator Constructor" << std::endl;
//     return (*this);
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "***ShrubberyCreationForm destroiiiiid***" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void ShrubberyCreationForm::executeit() const
{
    std::ofstream ofile(this->target +"_shrubbery");
    if(!ofile)
    {
        std::cerr << "Something went wrong trying to write to " << this->target << "_shrubbery" << std::endl;
        return ;
    }

    ofile << "\n"
                           "       # #### ####\n"
                           "     ### \\/#|### |/####\n"
                           "  ##\\/#/ \\||/##/_/##/_#\n"
                           "  ###  \\/###|/ \\/ # ###\n"
                           "##_\\_#\\_\\## | #/###_/_####\n"
                          "## #### # \\ #| /  #### ##/##\n"
                           "__#_--###`  |{,###---###-~\n"
                           "          \\ }{\n"
                           "           }}{\n"
                           "          }}{\n"
                           "           {{}\n"
                           "     , -=-~{ .-^- _\n"
                           "           `}\n"
                           "            }" "\n";
    ofile.close();
}