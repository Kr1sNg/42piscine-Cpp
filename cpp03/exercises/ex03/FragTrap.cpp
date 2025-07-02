/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:11:37 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 20:13:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	_hit_pnt = 100;
	_enrg_pnt = 100;
	_attk_dmg = 30;
	std::cout << " 🐸 FragTrap default constructor called." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << " 🐸 FragTrap " << _name << " is destroyed." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	_hit_pnt = 100;
	_enrg_pnt = 100;
	_attk_dmg = 30;
	std::cout << " 🐸 FragTrap " << _name << " is created." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src._name + "_copy")
{
	_name = src._name + "_copy";
	_hit_pnt = src._hit_pnt;
	_enrg_pnt = src._enrg_pnt;
	_attk_dmg = src._attk_dmg;
	std::cout << " 🐸 FragTrap " << _name << " is a clone of " << src._name << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name + "_2";
		_hit_pnt = rhs._hit_pnt;
		_enrg_pnt = rhs._enrg_pnt;
		_attk_dmg = rhs._attk_dmg;
		std::cout << " 🐸 FragTrap " << _name << " is assigned equal with " << rhs._name << std::endl;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (_enrg_pnt > 0)
	{
		std::cout << " 🐸 FragTrap " << _name << " attacks " << target << ", causing " << _attk_dmg << " points of damage!" << std::endl;
		_enrg_pnt -= 1;
	}
	else
		std::cout << " 🐸 FragTrap " << _name << " doesn't have enough energy points to attack." << std::endl;
	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << " 🐸 FragTrap " << _name << " is asking for a positive high-five ✋" << std::endl;
}
