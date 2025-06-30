/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:37:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 21:59:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::Point(float f1, float f2): _x(f1), _y(f2)
{
	return ;
}

Point::Point(Point const &src): _x(src._x), _y(src._y)
{
	return ;
}

Point	&Point::operator=(Point const &rhs)
{
	// can't assigne new value for const _x, _y
	(void)rhs;
	return (*this);
}

Point::~Point(void)
{
	return ;
}

Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

// bool	Point::operator==(Point const &rhs) const
// {
// 	if (_x == rhs._x && _y == rhs._y)
// 		return (true);
// 	else
// 		return (false);	
// }
