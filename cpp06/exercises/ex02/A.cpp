/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:26:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 22:27:38 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include <iostream>

A::A(void)
{
	std::cout << "Object A is created!" << std::endl;
}

A::~A()
{
	std::cout << "Object A is destroyed!" << std::endl;
}
