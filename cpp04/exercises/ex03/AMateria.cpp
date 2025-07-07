/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:39:41 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:42:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): _type(type)
{
	return ;
}

AMateria::AMateria(void): _type("")
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src; // if using deep copy in operator =
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
