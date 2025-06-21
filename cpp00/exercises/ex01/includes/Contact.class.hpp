/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 09:10:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

string	formatField(const string& field);

class Contact
{
	private:
		string	_first;
		string	_last;
		string	_nick;
		string	_nbr;
		string	_secret;

	public:
		Contact(void);
		~Contact(void);
	
		bool	init(void);
	
		string	getFirst(void) const;
		bool	setFirst(string first);

		string	getLast(void) const;
		bool	setLast(string last);
	
		string	getNick(void) const;
		bool	setNick(string nick);

		string	getNbr(void) const;
		bool	setNbr(string nbr);

		string	getSecret(void) const;
		bool	setSecret(string secret);

		void	display(int index) const;
		void	displayFull(void) const;

};

#endif