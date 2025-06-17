/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_member_attributes_and_member_functions.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:14:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 20:12:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "03_member_attributes_and_member_functions.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
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

int	main(void)
{
	Sample	instance;
	
	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return (0);
}