/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:44:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("default")
{
	std::cout << "AAnimal constructor called with type " << _type << std::endl;
}

AAnimal::AAnimal(AAnimal const &src): _type(src._type)
{
	return ;
}
AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (_type);
}

