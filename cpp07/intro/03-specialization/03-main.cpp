/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:46:14 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 23:50:00 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "03-specialization.tpp"
#include <iostream>
#include <string>

int	main(void)
{
	Pair<int, int>				p1(4, 2);
	Pair<std::string, float>	p2(std::string("Pi"), 3.14f);
	Pair<float, bool>			p3(4.2f, true);
	Pair<bool, bool>			p4(true, false);
	
	std::cout << "p1: " << p1 << std::endl;
	std::cout << "p2: " << p2 << std::endl;
	std::cout << "p3: " << p3 << std::endl;
	std::cout << "p4: " << p4 << std::endl;
	
	return (0);
}