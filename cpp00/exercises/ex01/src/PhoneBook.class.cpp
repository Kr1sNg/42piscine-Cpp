/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:11:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void): _totalContacts(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

bool	PhoneBook::add(void)
{
	Contact	anew;
	int		index = _totalContacts % 8;
	
	if (_totalContacts >= 8)
		contacts[index] = anew;
	if (!contacts[index].init())
		return (false);
	_totalContacts++;
	std::cout << " ✅ New contact added at index " << index << std::endl;

	return (true);
}

void	PhoneBook::search(void)
{
	int				count;
	std::string		cmd;
	int				nbr;

	if (_totalContacts <= 0)
	{
		std::cout << "\t 🪪 Empty Phone Book!" << std::endl;
		return ;
	}
	if (_totalContacts < 8)
		count = _totalContacts;
	else
		count = 8;
	display(count);
	while (1)
	{
		std::cout << " 👉 Enter the index: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			exit(1);
		}
		
		// convert string to int
		std::istringstream	iss(cmd);
		if ((iss >> nbr) && nbr >= 0 && nbr < count)
			break ;
		else
			std::cout << " ⛔ Out of range. Please try again!" << std::endl;
	}
	contacts[nbr].displayFull();
	
	return ;
}

void	PhoneBook::_contactline(const Contact contact, int index) const
{
	std::cout << "|" << std::setw(10) << index << "|"
		 << formatField(contact.getFirst()) << "|"
		 << formatField(contact.getLast()) << "|"
		 << formatField(contact.getNick()) << "|" << std::endl;		 
}

void	PhoneBook::display(int lengthoflist)
{
	int	i = -1;
	
	std::cout << "|" << std::setw(10) << "Index" << "|"
		 << std::setw(10) << "First Name" << "|"
		 << std::setw(10) << "Last Name" << "|"
		 << std::setw(10) << "Nickame" << "|" << std::endl;

	while (++i < lengthoflist)
		_contactline(contacts[i], i);
	
	return ;
}
