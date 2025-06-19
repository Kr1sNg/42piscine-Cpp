/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_encapsulation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/18 11:16:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "07_encapsulation.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->privateFoo: " << this->_privateFoo << std::endl;
	
	this->publicBar();
	this->_privateBar();

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	
	return ;
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	
	return ;
}

int	main(void)
{
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	// instance._privateBar();

	return (0);
}