/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 20:25:20 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>  //except "replace"
#include <iostream>
#include <fstream>

/*	pseudo-code
// - read from file line by line?
// - find keyword in line => replace
// - output to file
*/

std::string	find_and_replace(const std::string &line, const std::string &key, const std::string &replace)
{
	if (key.empty())
		return (line);
	
	std::string	result;
	size_t		pos = 0; // find will search only from (include) pos
	size_t		found;
	
	while ((found = line.find(key, pos)) != std::string::npos)
	{
		// Append part before keyword
		result += line.substr(pos, found - pos); //0 - where we found key
		// Append replace
		result += replace;
		// move pos to the next part
		pos = found + key.size();
	}
	// Append the rest of line
	result += line.substr(pos);
	
	return (result);
}

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
		std::cerr << "Can't open input file " << av[1] << std::endl;
		return (1);
	}
	
	std::ofstream	ofs(std::string(av[1]) + ".replace"); //create output file stream
	if (!ofs)
	{
		std::cerr << "Can't create output file" << std::endl;
		return (1);
	}
	
	std::string		line;
	while (std::getline(ifs, line))
	{
		ofs << find_and_replace(line, av[2], av[3]) << std::endl;
	}
	
	ofs.close();
	ifs.close();

	return (0);
}
