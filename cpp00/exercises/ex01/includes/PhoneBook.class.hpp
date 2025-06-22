/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/22 10:38:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <cstdlib>
# include "Contact.class.hpp"

using namespace std;

string	formatField(const string& field);

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		_totalContacts;
		void	_contactline(const Contact contact, int index) const;
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
	
		bool	add(void);
		void	search(void);
		void	display(int	lengthoflist);
		
};

#endif