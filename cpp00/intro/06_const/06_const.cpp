/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_const.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 23:43:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "06_const.hpp"

Sample::Sample(float const f) : pi(f), qd(42) // init for const!!!
{
	std::cout << "Construction called" << std::endl;

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}

void	Sample::bar(void) const // read-only
{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	
	return ;
}

int	main(void)
{
	Sample	instance(77.7f);

	instance.bar();
	return (0);
}