/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 17:23:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("default")
{
	std::cout << "Animal constructor called with type " << _type << std::endl;
}

Animal::Animal(Animal const &src): _type(src._type)
{
	return ;
}
Animal	&Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void Animal::makeSound(void) const
{
	std::cout << " 🗿 Every animal knows how to make sound." << std::endl;
}
