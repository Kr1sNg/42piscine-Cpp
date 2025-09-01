/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:13:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/01 11:23:29 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//2011-05-23,6.81

int	loadData(std::map<std::string, float> &database)
{
	std::ifstream	csv("data.csv");
	std::string		line;
	
	if (!csv.is_open())
	{
		std::cerr << "Error: Could not open database" << std::endl;
		return (-42);
	}
	std::getline(csv, line); //we pass the first line of colname
	while (std::getline(csv, line))
	{
		size_t	comma = line.find(',');
		std::string	date = line.substr(0, comma);
		float	price = atof(line.substr(comma + 1).c_str());
		database[date] = price;
	}
	return (0);
}

void	printMap(std::map<std::string, float> &database)
{
	for (std::map<std::string, float>::const_iterator it = database.begin(); it != database.end(); ++it)
	{
		// first and second element from std::pair
		std::cout << it->first << " " << it->second << std::endl;
	}
}

// date | value
// 2011-01-03 | 3
// 2012-01-11 | -1
// 2001-42-42
// 2012-01-11 | 2147483648


bool	validLine(std::string &line)
{
	size_t	pipe = line.find('|');
	
	std::string	date = line.substr(0, pipe - 1);
	
	int	value = atoi(line.substr(pipe + 1).c_str());
	
}

int	readInput(std::string &path)
{
	std::ifstream	file(path);
	std::string		line;
	
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file." << std::endl;
		return (-42);
	}
	std::getline(file, line);	//get the first line
	
	while (std::getline(file, line))
	{
		
	}
}