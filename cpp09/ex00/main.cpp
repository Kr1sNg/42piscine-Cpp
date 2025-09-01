/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:19:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/01 11:10:41 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Map!

#include "BitcoinExchange.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: Could not open file." << std::endl;
		return (-42);
	}
	
	/*
	- read and load database into map -ok
	- read file and check valid value
	- find in map line by line and calculate
	*/

	// load database from "data.csv"
	std::map<std::string, float> database;
	if (loadData(database) < 0)
		return (-42);
	
	// test database
	printMap(database);
	
	// read file
	
	
	
	(void)av;
	return (0);
}