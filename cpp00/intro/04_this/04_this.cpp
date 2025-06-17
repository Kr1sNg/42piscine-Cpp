/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_this.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:14:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 21:04:50 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "04_this.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42; // "this" is as (self) in Python
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();
	
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}

int	main()
{
	Sample	instance;

	std::cout << "Main finished" << std::endl;
	return (0);
}