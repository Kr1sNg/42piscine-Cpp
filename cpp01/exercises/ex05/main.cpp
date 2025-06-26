/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:11:33 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 17:22:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <ctype.h>
#include <stdlib.h>

std::string	ft_stolower(std::string s)
{
	int			i = 0;
	std::string	res = "";
	
	while (s[i])
	{
		res += tolower(s[i]);
		i++;
	}
	return (res);
}

int	main(int ac, char **av)
{
	std::string	level;
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " level: DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (1);
	}
	level = ft_stolower(av[1]);
	
	Harl	aNewHarl(level);
	return (0);
}
