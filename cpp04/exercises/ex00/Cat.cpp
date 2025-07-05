/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:08:11 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 11:05:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	_type = "Cat";
	std::cout << " 🐱 Cat constructor called with type " << _type << std::endl;
}

Cat::Cat(Cat const &src)
{
	_type = src._type;
	return ;
}
Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << " 🐱 Cat destructor called." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << " 🐱 Meoww actually I don't really want to meow, Meow~ " << std::endl;
}
