/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:37:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 21:11:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char *argv[])
{
	int		i;
	int 	j;
	int		len;
	char 	c;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		len = strlen(argv[i]);
		j = -1;
		while (++j < len)
		{
			c = toupper(argv[i][j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}