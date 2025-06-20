/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/20 10:04:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Contact.class.hpp"

using namespace std;

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret): 
	_first(first), _last(last), _nick(nick), _number(num), _secret(secret);
{
	this->__index =
}

Contact::~Contact(void)
{}

void	Contact::setFirst(string first): const
{
	this->_first_name = first;
}