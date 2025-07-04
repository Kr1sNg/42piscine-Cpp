/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_init_list.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 22:57:43 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "05_init_list.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;
	
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return ;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// initialization list
Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Contructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int	main(void)
{
	Sample1	instance1('a', 42, 4.2f);
	
	Sample2	instance2('z', 12, 3.14f);

	return (0);
}