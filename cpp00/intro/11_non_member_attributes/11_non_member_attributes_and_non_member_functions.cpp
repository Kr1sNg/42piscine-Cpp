/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_non_member_attributes_and_non_member_fun        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:17:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 11:48:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "11_non_member_attributes_and_non_member_functions.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return ;
}

int	Sample::getNbInst(void)
{
	return (Sample::_nbInst);
}

int	Sample::_nbInst = 0;

