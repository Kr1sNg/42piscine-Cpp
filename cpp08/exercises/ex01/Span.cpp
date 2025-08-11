/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 08:52:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/11 21:13:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _capaMax(N), _arrInt(0)
{
}

Span::~Span()
{
}

Span::Span(Span const &src): _capaMax(src._capaMax), _arrInt(0)
{
	_arrInt = src._arrInt;
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_capaMax = rhs._capaMax;
		_arrInt = rhs._arrInt;
	}
	return (*this);
}
		
void	Span::addNumber(int value)
{
	if (_arrInt.size() >= _capaMax)
		throw (std::out_of_range("Reach the max capacity"));
	_arrInt.push_back(value);
}
		
int	Span::shortestSpan(void) const
{
	if (_arrInt.size() < 2)
		throw (std::length_error("No span can be found"));
	
	std::vector<int> sortedArr = _arrInt;
	std::sort(sortedArr.begin(), sortedArr.end());
	int	minSpan = sortedArr[1] - sortedArr[0];
	for (unsigned int i = 1; i < sortedArr.size() - 1; ++i)
		minSpan = std::min(minSpan, sortedArr[i + 1] - sortedArr[i]);
	return (minSpan);
}

int	Span::longestSpan(void) const
{
	if (_arrInt.size() < 2)
		throw (std::length_error("No span can be found"));
	int	maxi = *std::max_element(_arrInt.begin(), _arrInt.end());
	int mini = *std::min_element(_arrInt.begin(), _arrInt.end());
	return (maxi - mini);
}

void	Span::displayArr(void) const
{
	for (unsigned int i = 0; i < _capaMax; ++i)
	{
		if (i < _arrInt.size())
			std::cout << "Used[" << i << "]: " << _arrInt[i] << std::endl;
		else
			std::cout << "Rest[" << i << "]: (empty) " << std::endl;
	}
}
