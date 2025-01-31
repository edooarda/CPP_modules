/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fake_sed.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/29 11:26:19 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/31 13:50:56 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FAKE_SED_HPP
#define FAKE_SED_HPP

#include <iostream>
#include <fstream>
#include <string.h>

bool	replace_strings(std::string &filename, std::string &find, std::string &replace);

#endif