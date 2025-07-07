/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:56:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:16:34 by tat-nguy         ###   ########.fr       */
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
		
Ice	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
