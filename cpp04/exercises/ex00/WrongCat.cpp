/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:20:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 15:08:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	_type = "WrongCat";
	std::cout << " 🐲 WrongCat constructor called with type " << _type << std::endl;
}

WrongCat::WrongCat(WrongCat const &src): WrongAnimal()
{
	_type = src._type;
	return ;
}
WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << " 🐲 WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << " 🐲 Dra... Dra... Dra...cula, oops, Dragon! " << std::endl;
}
