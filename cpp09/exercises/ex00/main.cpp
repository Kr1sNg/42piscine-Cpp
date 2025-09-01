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
/*
	- read and load database into map -ok
	- read file and check valid line -ok
	- find in map line by line and calculate -ok
*/

#include "BitcoinExchange.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: Could not open file." << std::endl;
		return (-42);
	}

	// - load database from "data.csv"
	std::map<std::string, float> database;
	if (loadData(database) < 0)
		return (-42);
	
	// test database
	// printMap(database);
	
	// - read file
	std::ifstream	file(av[1]);
	std::string		line;
	
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file." << std::endl;
		return (-42);
	}
	std::getline(file, line);	//get the first line
	
	while (std::getline(file, line))
	{
		// - check valid line
		if (!validLine(line.c_str()))
			continue ;
		
		// - find in map[key]
		std::string	dateStr;
		char		dateBuf[32];
		float		value;
		
		if (sscanf(line.c_str(), "%s | %f", dateBuf, &value) != 2)
		{
			std::cout << "Error: Invalid input." << std::endl;
			continue;
		}
		dateStr = dateBuf;

		// - calculate
		std::map<std::string, float>::iterator	it = database.lower_bound(dateStr);	// not less than dateStr

		// if input doesn't exist, use the closest lower date
		if (!(it != database.end() && it->first == dateStr) && (it != database.begin()))
			--it;
		std::cout << dateStr << " => " << value << " = " << (value * (it->second)) << std::endl;
	}
	return (0);
}