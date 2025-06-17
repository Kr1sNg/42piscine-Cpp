/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_stdio_streams.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:06:38 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 17:45:59 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[512];

	std::cout << "Hello, world !" << std::endl;

	std::cout << "Input a word: ";
	std::cin >> buff;
	
	std::cout << "You entered: [" << buff << "]" << std::endl;
	return (0);
}