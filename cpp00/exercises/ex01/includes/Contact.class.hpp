/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/20 02:13:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

using namespace std;

class Contact {
private:
	int		_index;
	string	_first_name;
	string	_last_name;
	string	_nickname;
	string	_number;
	string	_secret;

public:
	Contact(int index, string first, string last, string nick, string num, string secret);
	~Contact(void);
	
	string	getFirst(void) const;
	void	setFirst(string first);

	
};



#endif