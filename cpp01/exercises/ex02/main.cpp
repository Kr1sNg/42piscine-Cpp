/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 10:50:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 11:14:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int	main(void)
{
	std::string s("HI THIS IS BRAIN");
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;
	
	std::cout << std::setw(35) << "Memory address of string: " << &s << std::endl;
	std::cout << std::setw(35) << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(35) << "Memery address held by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(33) << "Value of string: " << s << std::endl;
	std::cout << std::setw(33) << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(33) << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}