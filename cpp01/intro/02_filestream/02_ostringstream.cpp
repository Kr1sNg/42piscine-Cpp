/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ostringstream.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:45:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 20:59:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// std::ostringstream — Build/format string in memory
//You use std::ostringstream to format and store text just like you'd write to std::cout.

#include <iostream>
#include <sstream>

int	main(void)
{	
	int					age(25);
	std::string			name("Alice");
	std::string			result("");
	std::ostringstream	oss;

	oss << "Name: " << name << ", Age: " << age;
	result = oss.str(); //get final string
	std::cout << result << std::endl;
	
	return (0);
}
