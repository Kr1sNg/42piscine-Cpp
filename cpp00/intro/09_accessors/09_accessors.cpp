/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_accessors.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:16:18 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 21:17:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "09_accessors.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	
	return ;
}

Sample::~Sample(void) {
	
	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Sample::getFoo(void) const {
	
	return (this->_foo);
}

void	Sample::setFoo(int v) {
	
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "foo can't be negative" << std::endl;
	return ;
}

int	main(void) {
	
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	
	instance.setFoo(-42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

	return (0);
}