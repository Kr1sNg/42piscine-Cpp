/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_operator_overload.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:34:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 19:54:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "01_operator_overload.hpp"

Integer::Integer(int const n): _n(n)
{
	std::cout << "Constructor is called with value " << _n << std::endl;
	return ;
}

Integer::~Integer(void)
{
	std::cout << "Destructor is called with value " << _n << std::endl;
	return ;
}

int	Integer::getValue(void) const
{
	return (this->_n);
}

Integer	&Integer::operator=(Integer const &rhs)
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();
	return (*this);
}

Integer Integer::operator+(Integer const &rhs) const
{
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return (Integer (this->_n + rhs.getValue()));
}

std::ostream	&operator<<(std::ostream &o, Integer const &rhs)
{
	o << rhs.getValue();
	return (o);
}

int	main(void)
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of x: " << x << std::endl; // using also op<<
	std::cout << "Value of y: " << y << std::endl;

	y = Integer(12);
	std::cout << "Value of new y: " << y << std::endl;
	
	std::cout << "Value of z: " << z << std::endl;
	z = x + y;
	std::cout << "Value of z = x + y: " << z << std::endl;
	
	return (0);
}
