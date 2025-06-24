/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:22:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 20:35:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> //except "replace"
#include <iostream>

int	main(int ac, char**av)
{
	if (ac != 4)
	{
		std::cout << "Usage: " << av[0] << " filename string_1 string_2" << std::endl;
		return (1);
	}
	
	std::ifstream( av[1] );
	
	
}