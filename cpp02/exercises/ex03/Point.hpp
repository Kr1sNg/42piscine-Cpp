/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:37:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:00:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINT_HPP_
# define _POINT_HPP_

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
		
	public:
		Point(void);
		Point(float f1, float f2);
		Point(Point const &src);
		Point &operator=(Point const &rhs);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		// bool	operator==(Point const &rhs) const;

};

#endif