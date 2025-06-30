/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:11:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 20:31:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "00_ad.hpp"
#include <iostream>

Sample::Sample(void)
{
	std::cout << "Constructor is called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor is called" << std::endl;
	return ;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member function bar called with char overload: " << c << std::endl;
	return ;
}

void	Sample::bar(int const n) const
{
	std::cout << "Member function bar called with int overload: " << n << std::endl;
	return ;
}

void	Sample::bar(float const z) const
{
	std::cout << "Member function bar called with float overload: " << z << std::endl;
	return ;
}

void	Sample::bar(Sample const &i) const
{
	(void)i;
	
	std::cout << "Member function bar called with class overload" << std::endl;
	return ;
}

int	main(void)
{
	Sample	example;
	
	example.bar('a');
	example.bar(42);
	example.bar(47.777f);
	example.bar(example);
	
	return (0);
}