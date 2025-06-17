/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_class_and_instance.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:14:02 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 18:53:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "02_class_and_instance.hpp"

Sample::Sample (void) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample (void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	main() {
	Sample	instance;

	return 0;
}