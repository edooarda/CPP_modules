/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edooarda <edooarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:36:56 by edribeir          #+#    #+#             */
/*   Updated: 2025/02/04 15:50:49 by edooarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR. Use this format: ./harlFilter level" << std::endl;
		return (1);
	}
	Harl	costumer;
	costumer.complains(argv[1]);
}