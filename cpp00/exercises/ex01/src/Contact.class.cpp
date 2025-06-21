/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 09:09:00 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

string	Contact::getFirst(void) const
{
	return (this->_first);
}

bool	Contact::setFirst(string first)
{
	if (first.size() > 0)
		return (this->_first = first, true);
	else
		return (false);
}

string	Contact::getLast(void) const
{
	return (this->_last);
}

bool	Contact::setLast(string last)
{
	if (last.size() > 0)
		return (this->_last = last, true);
	else
		return (false);
}

string	Contact::getNick(void) const
{
	return (this->_nick);
}

bool	Contact::setNick(string nick)
{
	if (nick.size() > 0)
		return (this->_nick = nick, true);
	else
		return (false);
}

string	Contact::getNbr(void) const
{
	return (this->_nbr);
}

bool	Contact::setNbr(string nbr)
{
	if (nbr.size() > 0)
		return (this->_nbr = nbr, true);
	else
		return (false);
}

string	Contact::getSecret(void) const
{
	return (this->_secret);
}

bool	Contact::setSecret(string secret)
{
	if (secret.size() > 0)
		return (this->_secret = secret, true);
	else
		return (false);
}

bool	Contact::init(void)
{
	string	input;
	
	cout << "\t 👨 First name: ";
	getline (cin, input);
	if (!setFirst(input))
		return (false);

	cout << "\t 👨 Last name: ";
	getline (cin, input);
	if (!setLast(input))
		return (false);
	
	cout << "\t 👨 Nickname: ";
	getline (cin, input);
	if (!setNick(input))
		return (false);
	
	cout << "\t 📱 Phone number: ";
	getline (cin, input);
	if (!setNbr(input))
		return (false);

	cout << "\t 👄 Darkest secret: ";
	getline (cin, input);
	if (!setSecret(input))
		return (false);
	
	return (true);
}

void	Contact::display(int index) const
{
	cout << "|" << setw(10) << index << "|"
		 << formatField(getFirst()) << "|"
		 << formatField(getLast()) << "|"
		 << formatField(getNick()) << "|" << endl;		 
}

void	Contact::displayFull(void) const
{
	cout << "\t🪪 Contact Information 🪪" << endl;
	cout << setw(20) << "First Name: " << getFirst() << endl;
	cout << setw(20) << "Last Name: " << getLast() << endl;
	cout << setw(20) << "Nickname: " << getNick() << endl;
	cout << setw(20) << "Phone Number: " << getNbr() << endl;
	cout << setw(20) << "Darkest Secret: " << getSecret() << endl;
}
