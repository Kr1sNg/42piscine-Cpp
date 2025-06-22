/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_pointers_to_members.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:17:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 22:20:42 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "12_pointers_to_members.hpp"

int	main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL; // declare int pointer of the class
	void	(Sample::*f)(void) const; // declare pointer to function of class

	p = &Sample::foo; // assigne address of foo to p
	
	// change value of foo in object instance:
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21; //using pointer of member attribute
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42; //using pointer of member/ object
	// otherwise: (*instancep).*p
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	// access member function by pointer to function
	f = &Sample::bar;
	// by pointer of member function
	(instance.*f)();
	// by using pointer of object
	(instancep->*f)();
	
	return (0);
}