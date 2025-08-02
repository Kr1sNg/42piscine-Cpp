/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 00:35:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 11:27:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.hpp"

Test::Test(void): _n(0)
{
	
}

Test::Test(int n): _n(n)
{
	
}

Test::~Test()
{
	
}

Test::Test(Test const &src): _n(src._n)
{

}

Test	&Test::operator=(Test const &rhs)
{
	if (this != &rhs)
		_n = rhs._n;
	return (*this);
}

bool	Test::operator==(Test const &rhs) const
{
	return (this->_n == rhs._n);
}

bool	Test::operator!=(Test const &rhs) const
{
	return (this->_n != rhs._n);
}

bool	Test::operator>(Test const &rhs) const
{
	return (this->_n > rhs._n);
}

bool	Test::operator<(Test const &rhs) const
{
	return (this->_n < rhs._n);
}

bool	Test::operator>=(Test const &rhs) const
{
	return (this->_n >= rhs._n);
}

bool	Test::operator<=(Test const &rhs) const
{
	return (this->_n <= rhs._n);
}

int	Test::get_n(void) const
{
	return (this->_n);
}

std::ostream	&operator<<(std::ostream &o, Test const &a)
{
	o << a.get_n();
	return (o);
}
