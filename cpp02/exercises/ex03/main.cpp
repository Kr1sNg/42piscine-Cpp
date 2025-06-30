/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:07:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	AreaOfTriangle(Point const a, Point const b, Point const c);
bool	bsp(Point const a, Point const b, Point const c, Point const point);


int main( void ) {

	Point	a(1.5f, 1.5f);
	Point	b(1.5f, 4.5f);
	Point	c(4.5f, 3.0f);
	// Point	point(1.5f, 2.0f); // on edge
	// Point	point(4.5f, 3.0f); // a vertex
	// Point	point(4.5f, 6.0f); // outside
	Point	point(3.0f, 3.0f); // is inside
	
	if (bsp(a, b, c, point))
		std::cout << "✅ Point is inside the triangle ABC" << std::endl;
	else
		std::cout << "⛔️ Point is NOT inside the triangle ABC" << std::endl;
	
	return 0;
}
