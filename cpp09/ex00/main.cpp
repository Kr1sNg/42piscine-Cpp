/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:19:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/31 11:29:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Map!

#include <iostream>
#include <fstream>
#include "database.hpp"

int	main(int ac, char *av[])
{
	int	fd;
	
	if (ac != 2)
	{
		std::cout << "Usage: ./btc <eval_file>" << std::endl;
		return (-42);
	}
	
	/*
	- load database
	- read file
	- check valid value
	- read data.csv
	- calculate
	*/

	// load database from "data.csv"
	std::map<std::string
	
	return (0);
}