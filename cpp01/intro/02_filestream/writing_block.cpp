/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_writing_block.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 10:16:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 10:44:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

char	header[] = " * * * P I Z Z A  P R O N T O * * *\n\n";
struct	Pizza
{
	char	name[32];
	float	price;
};

const int	MAXCNT = 10;

Pizza	pizzaMenu[MAXCNT] =
{
	{ "Perperoni", 9.90F }, { "White Pizza", 15.90F },
	{ "Ham Pizza", 12.50F }, { "Calzone", 14.90F }
};

int		cnt = 4;
char	pizzaFile[256] = "pizza.txt";

int	main(void)
{
	std::cout << header << std::endl;
	
	int	exitCode = 0;
	std::ofstream	outfile(pizzaFile, std::ios::out|std::ios::binary);
	if (!outfile)
	{
		std::cerr << "Error opening file!" << std::endl;
		exitCode = 1;
	}
	else
	{
		for (int i = 0; i < cnt; ++i)
		{
			if (!outfile.write((char *)&pizzaMenu[i], sizeof(Pizza)))
			{
				std::cerr << "Error writing!" << std::endl;
				exitCode = 2;
			}
		}
	}
	if (exitCode == 0)
	{
		std::cout << "\nData has been added to file " << pizzaFile << std::endl; 
	}
	return (exitCode);
}


