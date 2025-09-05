/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:13:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/05 12:47:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	(void)src;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	(void)rhs;
	return (*this);
}

bool	BitcoinExchange::isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// date | value
// 2011-01-03 | 3
bool	BitcoinExchange::validLine(char const *line)
{
	int		daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int		year, month, day;
	double 	value;

	if (sscanf(line, "%d-%d-%d | %lf", &year, &month, &day, &value) != 4)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return (false);
	}
	
	// check valid month & year
	if (year < 1 || month > 12 || month < 1)
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (false);
    }
	
	// check valid day
	if (month == 2 && isLeapYear(year))
		daysInMonth[1] = 29;
	if (day < 1 || day > daysInMonth[month - 1])
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (false);
	}
	
	// check valid value
	if (value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::hasNoSpace(std::string &s)
{
	if (!std::isdigit(s[0]))
		return (false);
	
	for (size_t i = 0; i < s.size(); ++i)
	{
		if (std::isspace(s[i]))
			return (false);
	}
	return (true);
}

//date,exchange_rate
//2011-05-23,6.81
void	BitcoinExchange::loadDatabase(char const *path)
{
	std::ifstream	csv(path);
	std::string		line;
	
	if (!csv.is_open())
		throw std::invalid_argument("Error: Could not open database.");
	std::getline(csv, line); //we pass the first line of colname
	while (std::getline(csv, line))
	{
		size_t	comma = line.find(',');
		if (comma == std::string::npos)
			throw std::length_error("Error: Error database.");
			
		std::string	date = line.substr(0, comma);
		double		price = atof(line.substr(comma + 1).c_str());
		
		_db[date] = price;
	}
}

void	BitcoinExchange::execute(char const *input)
{	
	// - read file input
	std::ifstream	file(input);
	std::string		line;
	
	if (!file.is_open())
		throw std::invalid_argument("Error: Could not open file.");
	std::getline(file, line);	//get the first line
	
	while (std::getline(file, line))
	{
		if (!validLine(line.c_str()))
			continue ;
		
		// make sure if there's only one space before and after "|", and there's nothing after Value
		size_t	pipe = line.find('|');
		if (pipe == std::string::npos || !std::isspace(line[pipe - 1]))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		
		std::string	dateStr = line.substr(0, pipe - 1);
		std::string	valueStr = line.substr(pipe + 2);
		if (!hasNoSpace(dateStr) || !hasNoSpace(valueStr))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		double	value = atof(valueStr.c_str());
		
		// calculate
		// if input doesn't exist, use the closest lower date
		std::map<std::string, double>::iterator	it = _db.lower_bound(dateStr);	// not less than dateStr

		if (!(it != _db.end() && it->first == dateStr) && (it != _db.begin()))
			--it;
		std::cout << dateStr << " => " << value << " = " << value * (it->second) << std::endl;
	}
}

//to test database
void	BitcoinExchange::printDatabase(void)
{
	std::map<std::string, double>::const_iterator it = _db.begin();
	
	for (; it != _db.end(); ++it)
	{
		// first and second element from std::pair
		std::cout << it->first << " " << it->second << std::endl;
	}
}

