/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_floating_point_numbers.cpp                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:11:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/29 19:44:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <iomanip>

bool isAlmostEqual(double a, double b, double epsilon = 1e-9)
{
	return (std::abs(a - b) < epsilon);
}

int	main(void)
{
	double	x = 0.1 + 0.2050000000;
	double	y = 0.305;
	
	// if (x == y)
	// 	std::cout << "x = y" << std::endl;
	// else
	// 	std::cout << "They are not equal" << std::endl;

	if (isAlmostEqual(x, y))
		std::cout << "x = y" << std::endl;
	else
		std::cout << "They are not equal" << std::endl;

	std::cout << std::fixed << std::setprecision(4); // set 4 decimal places
	std::cout << "x :" << x << std::endl;
	std::cout << "y :" << y << std::endl;
	
}


