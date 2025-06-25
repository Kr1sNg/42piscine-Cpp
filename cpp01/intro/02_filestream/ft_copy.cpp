/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 23:22:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 10:50:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_copy(std::istream &is, std::ostream &os)
{
	char	c;
	
	while (is.get(c)) // get is used for character
		os.put(c);
}

int	main(int ac, char *av[])
{
	if (ac < 2 || ac > 3)
	{
		std::cerr << "Usage: ft_copy source [ destination ]" << std::endl;
		return (1);
	}
	
	// open source
	std::ifstream	infile(av[1]);
	if (!infile.is_open())
	{
		std::cerr << "Error on opening file" << av[1] << std::endl;
		return (1);
	}
	if (ac == 2) // no destination => stdout
		ft_copy(infile, std::cout);
	else
	{
		std::ofstream	outfile(av[2]);
		if (!outfile.is_open())
		{
			std::cerr << "Error on opening file" << av[2] << std::endl;
			return (1);
		}
		ft_copy(infile, outfile);
		outfile.close();
	}
	infile.close();
	return (0);
}