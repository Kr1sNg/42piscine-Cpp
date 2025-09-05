/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:33:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/05 13:11:38 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// stack - LIFO

#include "RPN.hpp"

int	main(int ac, char *av[])
{
	try
	{
		if (ac != 2)
			throw std::length_error("Usage: RPN \"operand operand operator ...\"");
	
		RPN	rpn;
		
		std::cout << rpn.calculate(av[1]) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Error: Unexpected Error" << std::endl;
	}
	
	return (0);
}

