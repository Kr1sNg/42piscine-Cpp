/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 21:44:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 21:52:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "10_comparisons.hpp"

int	main(void) {
	Sample	instance1(42);
	Sample	instance2(42);
	
	if (&instance1 == &instance1)
		std::cout << "instance 1 == instance 1 physically" << std::endl;
	else
		std::cout << "instance 1 != instanct 1 physically" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "instance 1 == instance 2 physically" << std::endl;
	else
		std::cout << "instance 1 != instance 2 physically" << std::endl;
	
	if (instance1.compare(&instance1) == 0)
		std::cout << "instance 1 == instance 1 structurally" << std::endl;
	else
		std::cout << "instance 1 != instanct 1 structurally" << std::endl;

	if (instance1.compare(&instance2) == 0)
		std::cout << "instance 1 == instance 2 structurally" << std::endl;
	else
		std::cout << "instance 1 != instance 2 structurally" << std::endl;
	
	return (0);
}