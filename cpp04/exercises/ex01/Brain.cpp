/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:46:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 16:43:55 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void): _ideas()
{
	std::cout << " 🧠 Brain is created 🧠" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << " 🤯 Brain is destroyed 🤯 " << std::endl;	
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int index) const
{
	return (_ideas[index]);
}

void	Brain::setIdea(int index, std::string const &idea)
{
	_ideas[index] = idea;
}
