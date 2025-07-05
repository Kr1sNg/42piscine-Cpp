/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:08:11 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 17:30:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << " 🐱 Cat constructor called with type " << _type << std::endl;
}

Cat::Cat(Cat const &src): Animal(src)
{
	_type = src._type;
	_brain = new Brain(*src._brain);
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		if (_brain)
			delete (_brain);
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << " 🐱 Cat destructor called." << std::endl;
	delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << " 🐱 Meoww actually I don't really want to meow, Meow~ " << std::endl;
}
