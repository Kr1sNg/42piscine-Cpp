/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:20:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:46:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "default WrongAnimal";
	std::cout << " 🎅 WrongAnimal constructor called with type " << _type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " 🎅 WrongAnimal is destroy." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src): _type(src._type)
{
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << " 🎅 Je suis human! 🤷‍ (WrongCat should output the WrongAnimal sound) " << std::endl;
}
