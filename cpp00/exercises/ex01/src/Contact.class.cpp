/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:22:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/20 02:11:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Contact.class.hpp"

using namespace std;

Contact::Contact(std::string first, std::string last, std::string nick, std::string num, std::string secret): 
	first_name(first), last_name(last), nickname(|nick), number(num), darknest_secret(secret);
{
	this->__index =
}

Contact::~Contact()
{}

void	Contact::setFirst(string first): _first_name(first)