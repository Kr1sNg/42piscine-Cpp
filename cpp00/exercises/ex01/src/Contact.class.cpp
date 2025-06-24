/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:07:24 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(void): _first(""), _last(""), _nick(""),
						_nbr(""), _secret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getFirst(void) const
{
	return (this->_first);
}

bool	Contact::setFirst(const std::string& first)
{
	if (first.size() > 0)
		return (this->_first = first, true);
	else
		return (false);
}

std::string	Contact::getLast(void) const
{
	return (this->_last);
}

bool	Contact::setLast(const std::string& last)
{
	if (last.size() > 0)
		return (this->_last = last, true);
	else
		return (false);
}

std::string	Contact::getNick(void) const
{
	return (this->_nick);
}

bool	Contact::setNick(const std::string& nick)
{
	if (nick.size() > 0)
		return (this->_nick = nick, true);
	else
		return (false);
}

std::string	Contact::getNbr(void) const
{
	return (this->_nbr);
}

bool	Contact::setNbr(const std::string& nbr)
{
	if (nbr.size() > 0)
		return (this->_nbr = nbr, true);
	else
		return (false);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

bool	Contact::setSecret(const std::string& secret)
{
	if (secret.size() > 0)
		return (this->_secret = secret, true);
	else
		return (false);
}

std::string	Contact::setInfo(std::string msg)
{
	std::string	input = "";

	while (!input.size())
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			break ;
		}
		if (!input.size())
		{
			std::cout << " ⛔ Field can't be empty!" << std::endl;
			std::cout << "    Please try again! 🔫" << std::endl;
		}
	}
	return (input);
}


bool	Contact::init(void)
{
	if (!setFirst(setInfo("\t 👨 First name: ")))
		return (false);

	if (!setLast(setInfo("\t 👨 Last name: ")))
		return (false);
	
	if (!setNick(setInfo("\t 👨 Nickname: ")))
		return (false);
	
	if (!setNbr(setInfo("\t 📱 Phone number: ")))
		return (false);

	if (!setSecret(setInfo("\t 👄 Darkest secret: ")))
		return (false);
	
	return (true);
}

void	Contact::displayFull(void) const
{
	std::cout << "\t🪪 Contact Information 🪪" << std::endl;
	std::cout << std::setw(20) << "First Name: " << getFirst() << std::endl;
	std::cout << std::setw(20) << "Last Name: " << getLast() << std::endl;
	std::cout << std::setw(20) << "Nickname: " << getNick() << std::endl;
	std::cout << std::setw(20) << "Phone Number: " << getNbr() << std::endl;
	std::cout << std::setw(20) << "Darkest Secret: " << getSecret() << std::endl;
}
