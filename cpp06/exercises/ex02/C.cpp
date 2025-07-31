/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:26:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 22:28:42 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"
#include <iostream>

C::C(void)
{
	std::cout << "Object C is created!" << std::endl;
}

C::~C()
{
	std::cout << "Object C is destroyed!" << std::endl;
}
