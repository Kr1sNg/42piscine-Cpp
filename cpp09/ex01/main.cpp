/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:33:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/30 20:34:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// vector

#include <iostream>

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Usage: RPN \"inverted Polish mathematical expression\"" << std::endl;
		return (-42);
	}
	std::cout << av[1] << std::endl;
	return (0);
}
