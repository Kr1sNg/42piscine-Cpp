/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:37:46 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:08:04 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// assume that point (d) is inside the triagle abc so Sabd + Sacd + Sbcd = Sabc
// esle  Sabd + Sacd + Sbcd > Sabc
// Sabc = 1/2 * |xa(yb - yc) + xb(yc - ya) + xc(ya - yb)|

Fixed	AreaOfTriangle(Point const a, Point const b, Point const c)
{
	Fixed	ax = a.getX();
	Fixed	ay = a.getY();
	Fixed	bx = b.getX();
	Fixed	by = b.getY();
	Fixed	cx = c.getX();
	Fixed	cy = c.getY();
	
	Fixed	area = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) / 2;

	if (area < 0)
		return (area * (-1));
	else
		return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	areaABC = AreaOfTriangle(a, b, c);
	std::cout << "ABC: " << areaABC << std::endl;
	Fixed	areaABP = AreaOfTriangle(a, b, point);
	std::cout << "ABP: " << areaABP << std::endl;
	Fixed	areaACP = AreaOfTriangle(a, c, point);
	std::cout << "ACP: " << areaACP << std::endl;
	Fixed	areaBCP = AreaOfTriangle(b, c, point);
	std::cout << "BCP: " << areaBCP << std::endl;
	
	std::cout << "ABP + ACP + BCP: " << areaABP + areaACP + areaBCP << std::endl;

	return (areaABP != 0 && areaACP != 0 && areaBCP != 0 && areaABP + areaACP + areaBCP == areaABC);
}
