/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:40:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 11:01:52 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hit_pnt(10), _enrg_pnt(10), _attk_dmg(0)
{
	std::cout << "ClapTrap default constructor called." << std::endl;
	return ;
}

ClapTrap::~ClapTrap	(void)
{
	std::cout << "ClapTrap " << this->_name << " is destroyed." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name): _name(name), _hit_pnt(10), _enrg_pnt(10), _attk_dmg(0)
{
	std::cout << "ClapTrap " << this->_name << " is created." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src): _name(src._name + "_copy"), _hit_pnt(src._hit_pnt), _enrg_pnt(src._enrg_pnt), _attk_dmg(src._attk_dmg)
{
	std::cout << "ClapTrap " << this->_name << " is a clone of " << src._name << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name + "_2";
		_hit_pnt = rhs._hit_pnt;
		_enrg_pnt = rhs._enrg_pnt;
		_attk_dmg = rhs._attk_dmg;
		std::cout << "ClapTrap " << _name << " is assigned equal with " << rhs._name << std::endl;
	}
	return (*this);
}
		
void	ClapTrap::attack(const std::string &target)
{
	if (_enrg_pnt > 0 && _hit_pnt > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attk_dmg << " points of damage!" << std::endl;
		_enrg_pnt -= 1;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have enough hit points or energy points to attack." << std::endl;
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_pnt == 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit point." << std::endl;
	}
	else if (_hit_pnt >= (int)amount)
	{
		std::cout << "ClapTrap " << _name << " is attacked and lost " << amount << " hit points." << std::endl;
		_hit_pnt -= (int)amount;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is attacked and lost " << _hit_pnt << " hit points." << std::endl;
		_hit_pnt = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_enrg_pnt > 0 && _hit_pnt > 0)
	{
		_hit_pnt += (int)amount;
		_enrg_pnt -= 1;
		std::cout << "ClapTrap " << _name << " is repaired " << amount << " hit points." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " doesn't have enough hit points or energy points to repaire." << std::endl;
}

