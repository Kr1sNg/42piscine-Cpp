/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:07:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 17:26:59 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << " 🐶 Dog constructor called with type " << _type << std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
	_type = src._type;
	_brain = new Brain(*src._brain);
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
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

Dog::~Dog(void)
{
	std::cout << " 🐶 Dog destructor called." << std::endl;
	delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << " 🐶 Woof Woof Woof Woof Woof " << std::endl;
}
