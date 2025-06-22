/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 10:34:31 by tat-nguy         ###   ########.fr       */
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
	cout << " ✅ New contact added at index " << index << endl;

	return (true);
}

void	PhoneBook::search(void)
{
	int				count;
	string			cmd;
	int				nbr;

	if (_totalContacts <= 0)
	{
		cout << "\t 🪪 Empty Phone Book!" << endl;
		return ;
	}
	if (_totalContacts < 8)
		count = _totalContacts;
	else
		count = 8;
	display(count);
	while (1)
	{
		cout << " 👉 Enter the index: ";
		getline(cin, cmd);
		if (cin.eof())
		{
			cout << "EOF detected. Exiting..." << endl;
			exit(1);
		}
		
		// convert string to int
		istringstream	iss(cmd);
		if ((iss >> nbr) && nbr >= 0 && nbr < count)
			break ;
		else
			cout << " ⛔ Out of range. Please try again!" << endl;
	}
	contacts[nbr].displayFull();
	
	return ;
}

void	PhoneBook::_contactline(const Contact contact, int index) const
{
	cout << "|" << setw(10) << index << "|"
		 << formatField(contact.getFirst()) << "|"
		 << formatField(contact.getLast()) << "|"
		 << formatField(contact.getNick()) << "|" << endl;		 
}

void	PhoneBook::display(int lengthoflist)
{
	int	i = -1;
	
	cout << "|" << setw(10) << "Index" << "|"
		 << setw(10) << "First Name" << "|"
		 << setw(10) << "Last Name" << "|"
		 << setw(10) << "Nickame" << "|" << endl;

	while (++i < lengthoflist)
		_contactline(contacts[i], i);
	
	return ;
}
