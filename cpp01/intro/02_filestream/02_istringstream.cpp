/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_istringstream.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:45:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 20:22:45 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// std::istringstream — Input from string (like from a line)
//You use std::istringstream to read values from a string just like you'd read from std::cin.

// example of converting numbers from a line

#include <iostream>
#include <sstream>

int	main(void)
{
	std::string			line = "42 3.14 -7";
	std::istringstream	input(line);
	int					a;
	double				b;
	int					c;

	input >> a >> b >> c;
	std::cout << "a:" << a << " b:" << b << " c:" << c << std::endl;
	
	return (0);
}
