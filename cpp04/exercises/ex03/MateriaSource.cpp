/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:20:33 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 18:17:33 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
	{
		_srcs[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_srcs[i])
			delete _srcs[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src; 
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
			_srcs[i] = rhs._srcs[i];
	}
	return (*this);
}
		
void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_srcs[i])
		{
			_srcs[i] = mat->clone();
			delete mat;
			return ;
		}
	}
	delete mat;
}


AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_srcs[i] && _srcs[i]->getType() == type)
			return _srcs[i]->clone();
	}
	return NULL;
}
