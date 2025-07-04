/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:39:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 11:35:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Henry");
	ClapTrap	b("Peter");
	ClapTrap	c(b);
	ClapTrap	d;
	
	d = a;
	
	std::cout << std::endl;
	
	a.attack("Peter");
	b.takeDamage(5);
	b.beRepaired(5);

	std::cout << std::endl;

	c.attack("Henry");
	a.takeDamage(10);
	a.beRepaired(5);
	
	std::cout << std::endl;
	
	return (0);
}