/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edooarda <edooarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:36:48 by edribeir          #+#    #+#             */
/*   Updated: 2025/02/04 15:51:50 by edooarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();

		enum Level {
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			OUT
		};
		Level	convert_str_to_enum(std::string &levelstr);
		void	complains(std::string level);
};

#endif