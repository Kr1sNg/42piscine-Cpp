/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:17:48 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 16:10:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &weapon): type(weapon)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string	const &Weapon::getType(void) const
{
	return (type);
};

void	Weapon::setType(std::string const &newType)
{
	type = newType;
}