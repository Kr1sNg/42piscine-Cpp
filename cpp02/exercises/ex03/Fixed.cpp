/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:15:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src): _value(src._value)
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs._value;
	return (*this);
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = i << _bits; // shift 8 bits to left (equal with *2^8 = *256)
	return ;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
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

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_value > rhs._value)
		return (true);
	else
		return (false);	
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_value < rhs._value)
		return (true);
	else
		return (false);	
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_value >= rhs._value)
		return (true);
	else
		return (false);	
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_value <= rhs._value)
		return (true);
	else
		return (false);	
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_value == rhs._value)
		return (true);
	else
		return (false);	
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_value != rhs._value)
		return (true);
	else
		return (false);	
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->_value + rhs._value);
	return (result);
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	Fixed	result;
	
	result.setRawBits(this->_value - rhs._value);
	return (result);
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	Fixed	result;
	
	long long raw = static_cast<long long>(this->_value) * rhs._value;
	result.setRawBits(static_cast<int>(raw >> _bits));
	return (result);
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	Fixed	result;
	
	if (rhs._value == 0)
	{
		std::cerr << "Error: division by zero" << std::endl;
		return (Fixed());
	}
	long long numerator = static_cast<long long>(this->_value) << _bits;
	result.setRawBits(static_cast<int>(numerator / rhs._value));
	return (result);
}
		
Fixed	&Fixed::operator++(void)
{
	_value += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) // return old value, but _value +1
{
	Fixed	temp = *this;
	
	this->_value += 1;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	_value -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) // return old value, but _value -1
{
	Fixed	temp = *this;
	
	this->_value -= 1;
	return (temp);
}

Fixed	&Fixed::min(Fixed &n1, Fixed &n2)
{
	return ((n1 < n2) ? n1 : n2);
}

Fixed const	&Fixed::min(Fixed const &n1, Fixed const &n2)
{
	return ((n1 < n2) ? n1 : n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2)
{
	return ((n1 > n2) ? n1 : n2);
}

Fixed const	&Fixed::max(Fixed const &n1, Fixed const &n2)
{
	return ((n1 > n2) ? n1 : n2);
}


