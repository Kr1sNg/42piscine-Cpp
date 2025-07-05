/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:07:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 20:47:04 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	_type = "Dog";
	std::cout << " 🐶 Dog constructor called with type " << _type << std::endl;
}

Dog::Dog(Dog const &src)
{
	_type = src._type;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << " 🐶 Dog destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << " 🐶 Woof Woof Woof Woof Woof " << std::endl;
}
