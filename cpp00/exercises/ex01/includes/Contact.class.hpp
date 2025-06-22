/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 10:38:20 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

using namespace std;

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
	
		string	setInfo(string msg);
		bool	init(void);
	
		string	getFirst(void) const;
		bool	setFirst(const string& first);

		string	getLast(void) const;
		bool	setLast(const string& last);
	
		string	getNick(void) const;
		bool	setNick(const string& nick);

		string	getNbr(void) const;
		bool	setNbr(const string& nbr);

		string	getSecret(void) const;
		bool	setSecret(const string& secret);

		void	displayFull(void) const;

};

#endif