/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showfile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 21:55:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 22:09:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Read a text file and outputs it in pages (80 characters per line && 20 lines per page)

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " filename" << std::endl;
		return (1);
	}
	
	std::ifstream file(av[1]); // create a file stream and open for reading
	if (!file)
	{
		std::cerr << "Can't open file " << av[1] << std::endl;
		return (2);
	}
	
	char	line[80];
	int		cnt = 0;

	// copy the file to standar output
	while (file.getline(line, 80))
	{
		std::cout << line << std::endl;
		if (++cnt == 20)
		{
			cnt = 0;
			std::cout << "\n\t ---- <return> to continue --- " << std::endl;
			std::cin.sync();
			std::cin.get();
		}
	}
	if (!file.eof())
	{
		std::cerr << "Error reading for the file " << av[1] << std::endl;
		return (3);
	}
	return (0);
}
