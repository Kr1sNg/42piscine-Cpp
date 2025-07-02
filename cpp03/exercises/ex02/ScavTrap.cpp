/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:15:40 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 10:19:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_hit_pnt = 100;
	_enrg_pnt = 50;
	_attk_dmg = 20;
	std::cout << " 🤖 ScavTrap default constructor called." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << " 🤖 ScavTrap " << _name << " is destroyed." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
	_hit_pnt = 100;
	_enrg_pnt = 50;
	_attk_dmg = 20;
	std::cout << " 🤖 ScavTrap " << _name << " is created." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	_name = src._name + "_copy";
	_hit_pnt = src._hit_pnt;
	_enrg_pnt = src._enrg_pnt;
	_attk_dmg = src._attk_dmg;
	std::cout << " 🤖 ScavTrap " << _name << " is a clone of " << src._name << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		std::cout << " 🤖 ScavTrap " << _name << " is assigned equal with " << rhs._name << std::endl;
		_name = rhs._name + "_2";
		_hit_pnt = rhs._hit_pnt;
		_enrg_pnt = rhs._enrg_pnt;
		_attk_dmg = rhs._attk_dmg;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (_enrg_pnt > 0)
	{
		std::cout << " 🤖 ScavTrap " << _name << " attacks " << target << ", causing " << _attk_dmg << " points of damage!" << std::endl;
		_enrg_pnt -= 1;
	}
	else
		std::cout << " 🤖 ScavTrap " << _name << " doesn't have enough energy points to attack." << std::endl;
	
}

void	ScavTrap::guardGate(void)
{
	std::cout << " 🤖 ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
