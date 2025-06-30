/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:21:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fixed-point number (8 fractional bits): 	- realvalue: 101010
										//	- _value:	 101010 00000000 (+8 bits for decimal)


#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	_value = i << _bits; // shift 8 bits to left (equal with *2^8 = *256)
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	_value = static_cast<int>(roundf(f * (1 << _bits))); // same with int i but we have to round the left of f (if any ex: 42.4788889)
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((static_cast<float>(_value)) / (1 << _bits)); // inverse of Fixed(float f)
}

int		Fixed::toInt(void) const
{
	return (_value >> _bits);	// inverse of Fixed(int i)
}

std::ostream	&operator<<(std::ostream &o, Fixed const &n)
{
	o << n.toFloat();
	return (o); 
}
