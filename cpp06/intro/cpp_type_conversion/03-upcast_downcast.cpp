/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-upcast_downcast.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:50:58 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/27 22:45:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this file, we still use C cast for Cpp cast

#include <iostream>

class Parent	{};
class Child1: public Parent {};
class Child2: public Parent {};

int	main(void)
{
	Child1	a;
	
	Parent*	b = &a; 
}
💻