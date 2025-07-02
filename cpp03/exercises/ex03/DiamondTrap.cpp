/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:29:14 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 11:24:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "default";
	ClapTrap::_name = _name + "_clap_name";
	_hit_pnt = FragTrap::_hit_pnt;
	_enrg_pnt = ScavTrap::_enrg_pnt;
	_attk_dmg = FragTrap::_attk_dmg;
	
	std::cout << " 💎 DiamondTrap default constructor called." << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << " 💎 DiamondTrap " << this->_name << " is destroyed." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hit_pnt = FragTrap::_hit_pnt;
	_enrg_pnt = ScavTrap::_enrg_pnt;
	_attk_dmg = FragTrap::_attk_dmg;
	std::cout << " 💎 DiamondTrap " << _name << " is created." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	_name = src._name + "_copy";
	ClapTrap::_name = _name + "_clap_name";
	_hit_pnt = src._hit_pnt;
	_enrg_pnt = src._enrg_pnt;
	_attk_dmg = src._attk_dmg;
	std::cout << " 💎 DiamondTrap " << this->_name << " is a clone of " << src._name << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		std::cout << " 💎 DiamondTrap " << _name << " is assigned equal with " << rhs._name << std::endl;
		_name = rhs._name + "_2";
		ClapTrap::_name = _name + "_clap_name";
		_hit_pnt = rhs._hit_pnt;
		_enrg_pnt = rhs._enrg_pnt;
		_attk_dmg = rhs._attk_dmg;
	}
	return (*this);
}
		
void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << " 💎 DiamondTrap name: " << _name << " and its ClapTrap name: " << ClapTrap::_name << std::endl;
}
