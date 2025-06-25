/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 15:14:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //except "replace"
#include <iostream>
#include <fstream>

int	main(int ac, char**av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " filename string_1 string_2" << std::endl;
		return (1);
	}
	
	std::ifstream	ifs(av[1]); //input file stream
	if (!ifs)
	{
		std::cerr << "Can't open file " << av[1] << std::endl;
		return (1);
	}
	else
	{
		std::string	line;
		while (std::getline(ifs, line))
		{
			
		}
	}
	
	
}

// - read from file line by line?
// - find keyword in line => replace
// - output to file