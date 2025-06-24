/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:04:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
	private:
		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_nbr;
		std::string	_secret;

	public:
		Contact(void);
		~Contact(void);
	
		std::string	setInfo(std::string msg);
		bool		init(void);
	
		std::string	getFirst(void) const;
		bool		setFirst(const std::string& first);

		std::string	getLast(void) const;
		bool		setLast(const std::string& last);
	
		std::string	getNick(void) const;
		bool		setNick(const std::string& nick);

		std::string	getNbr(void) const;
		bool		setNbr(const std::string& nbr);

		std::string	getSecret(void) const;
		bool		setSecret(const std::string& secret);

		void		displayFull(void) const;

};

#endif