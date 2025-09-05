/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:19:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/05 13:09:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Map!
/*
	- read and load database into map -ok
	- read file and check valid line -ok
	- find in map line by line and calculate -ok
*/

#include "BitcoinExchange.hpp"

int	main(int ac, char *av[])
{
	try
	{
		if (ac < 2)
			throw std::invalid_argument("Error: Could not open file.");
		else if (ac > 2)
			throw std::length_error("Error: Too many files.");

		BitcoinExchange	bitcoin;
		
		bitcoin.loadDatabase("data.csv");
		bitcoin.execute(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Error: Unexpected error" << std::endl;
	}
	
	return (0);
}
