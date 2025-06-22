/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:17:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 21:38:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "11_non_member_attributes_and_non_member_functions.hpp"

void	f0(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return ;
}


void	f1(void)
{
	Sample instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();

	return ;
}

int	main(void)
{
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return (0);
}