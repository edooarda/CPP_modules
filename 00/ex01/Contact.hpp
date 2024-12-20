/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/11 11:01:39 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 12:35:11 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		int			index;
	public:
		Contact();
		~Contact();
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNumber() const;
		std::string	getDarkestSecret() const;
		int	getIndex() const;
		void	setFirstName(std::string str);
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setPhoneNumber(std::string str);
		void	setDarkestSecret(std::string str);
		void	setIndex(int index);
		void	printContact();
};

#endif