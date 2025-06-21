/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 10:28:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.class.hpp"

PhoneBook::PhoneBook(void): totalContacts(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add(const Contact& anew)
{
	int	index = totalContacts % 8;
	contacts[index] = anew;
	totalContacts++;
	cout << " ✅ New contact added at index " << index << endl;

	return ;
}

void	PhoneBook::search(void)
{
	int				count;
	string			cmd;
	int				nbr;

	if (totalContacts <= 0)
	{
		cout << "\t 🪪 Empty Phone Book!" << endl;
		return ;
	}
	if (totalContacts < 8)
		count = totalContacts;
	else
		count = 8;
	display(count);
	while (1)
	{
		cout << " 👉 Enter the index: ";
		getline(cin, cmd);

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

void	PhoneBook::display(int lengthoflist)
{
	int	i = -1;
	
	cout << "|" << setw(10) << "Index" << "|"
		 << setw(10) << "First Name" << "|"
		 << setw(10) << "Last Name" << "|"
		 << setw(10) << "Nickame" << "|" << endl;

	while (++i < lengthoflist)
		contacts[i].display(i);
	
	return ;
}
