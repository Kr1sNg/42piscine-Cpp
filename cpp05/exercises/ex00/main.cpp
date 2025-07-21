/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:59:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 17:28:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureauA("officeA", 150);
		Bureaucrat	bureauB("officeB", 2);
		
		std::cout << bureauA << std::endl;
		std::cout << bureauB << std::endl;
	
		// std::cout << ">>--try to create a Officer with invalid grade--<<" << std::endl;
		// Bureaucrat	bureauC("officeC", 560);
		// std::cout << bureauC << std::endl;
		// Bureaucrat	bureauD("", 50);
		// std::cout << bureauD << std::endl;
		
		// std::cout << ">>--try to increment / decrement grade--<<" << std::endl;
		// bureauA.decrement(); // 151 => invalid
		// std::cout << bureauA << std::endl;
		// bureauB.increment(); // 1
		// std::cout << bureauB << std::endl;
		// bureauB.increment(); // 0 => invalid
		// std::cout << bureauB << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected error" << std::endl;
	}
	return (0);
}
