/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:56:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 11:41:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice::Ice(Ice const &src): AMateria(src)
{
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
	}
	return (*this);
}
		
AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
