/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 09:52:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 11:51:19 by tat-nguy         ###   ########.fr       */
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

Test	Test::operator+(Test const &rhs)
{
	Test	temp;
	temp._n = _n + rhs._n;
	return (temp);
}

int	Test::get(void) const
{
	return (this->_n);
}

std::ostream	&operator<<(std::ostream &o, Test const &rhs)
{
	o << rhs.get();
	return (o);
}
