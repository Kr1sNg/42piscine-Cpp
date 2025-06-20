/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_comparisons.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:16:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 21:41:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "10_comparisons.hpp"

Sample::Sample(int v): _foo(v) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Sample::getFoo(void) const {
	return (this->_foo);
}

int	Sample::compare(Sample *other) const {
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}

