/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 10:39:06 by tat-nguy         ###   ########.fr       */
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

string	Contact::getFirst(void) const
{
	return (this->_first);
}

bool	Contact::setFirst(const string& first)
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

bool	Contact::setLast(const string& last)
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

bool	Contact::setNick(const string& nick)
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

bool	Contact::setNbr(const string& nbr)
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

bool	Contact::setSecret(const string& secret)
{
	if (secret.size() > 0)
		return (this->_secret = secret, true);
	else
		return (false);
}

string	Contact::setInfo(string msg)
{
	string	input = "";

	while (!input.size())
	{
		cout << msg;
		getline(cin, input);
		if (cin.eof())
		{
			cout << "EOF detected. Exiting..." << endl;
			break ;
		}
		if (!input.size())
		{
			cout << " ⛔ Field can't be empty!" << endl;
			cout << "    Please try again! 🔫" << endl;
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
	cout << "\t🪪 Contact Information 🪪" << endl;
	cout << setw(20) << "First Name: " << getFirst() << endl;
	cout << setw(20) << "Last Name: " << getLast() << endl;
	cout << setw(20) << "Nickname: " << getNick() << endl;
	cout << setw(20) << "Phone Number: " << getNbr() << endl;
	cout << setw(20) << "Darkest Secret: " << getSecret() << endl;
}
