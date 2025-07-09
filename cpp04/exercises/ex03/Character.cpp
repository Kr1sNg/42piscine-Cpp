/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 09:37:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 09:52:06 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("")	// ICharacter doesn't have constructor logic to run so we can't call its constructor
{
	for (int i = 0; i < 4; ++i)
	{
		_skills[i] = NULL;
		_trash[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete _skills[i];
		_skills[i] = NULL;
		delete _trash[i];
		_trash[i] = NULL;
	}
}

Character::Character(Character const &src)
{
	*this = src; //works only if operator= is correctly written
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; ++i)
		{
			delete _skills[i]; //don't really need to check if (_skills[i]) because delete NULL also works
			if (rhs._skills[i])
				_skills[i] = rhs._skills[i]->clone();
			else
				_skills[i] = NULL;
				
			delete _trash[i];
			if (rhs._trash[i])
				_trash[i] = rhs._trash[i]->clone();
			else
				_trash[i] = NULL;
		}
	}
	return (*this);
}

Character::Character(std::string const &name): _name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		_skills[i] = NULL;
		_trash[i] = NULL;
	}
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!_skills[i])
		{
			_skills[i] = m->clone();
			delete m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
	{
		_trash[idx] = _skills[idx];
		_skills[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < 4)
	{
		if (_skills[idx])
			_skills[idx]->use(target);
	}
}
