/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:58:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:23:20 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string s ): _name(s)
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " is destroyed" << std::endl;
	return ;
};

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
	return ;
}

void	Zombie::setName( std::string n )
{
	this->_name = n;
};
