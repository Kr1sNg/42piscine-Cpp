/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:56:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 11:41:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure::Cure(Cure const &src): AMateria(src)
{
	return ;	// do not *this = src; here bcs we've already assigned AMateria(src)
}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
	{
		AMateria::operator=(rhs);	// don't need _type = rhs._type, as it's already in AMateria
	}
	return (*this);
}
		
AMateria	*Cure::clone(void) const
{
	return (new Cure());	
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
