/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_references.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:42:48 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 18:10:07 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	int	numberOfBalls = 42;
	
	int *ballsPtr = &numberOfBalls;
	int	&ballsRef = numberOfBalls; // can't change anymore, it's like a const pointer, point on one and only this item
	//int &ballsRef2; => FAUX bcs can't init a reference which point on nothing
	
	std::cout << "numberOfBalls: " << numberOfBalls
			  << " addressof numberOfBalls: " << &numberOfBalls
			  << " *ballsPtr: " << *ballsPtr
			  << " ballsPtr: " << ballsPtr << std::endl;

	std::cout << "numberOfBalls: " << numberOfBalls
			  << " addressof numberOfBalls: " << &numberOfBalls
			  << " *ballsPtr: " << *ballsPtr
			  << " ballsPtr: " << ballsPtr << std::endl;
	
	*ballsPtr = 21;
	std::cout << "numberOfBalls: " << numberOfBalls
			  << " *ballsPtr: " << *ballsPtr
			  << " ballsPtr: " << ballsPtr << std::endl;

	ballsRef = 84;
	std::cout << "numberOfBalls: " << numberOfBalls
			  << " addressof numberOfBalls: " << &numberOfBalls
			  << " *ballsPtr: " << *ballsPtr
			  << " ballsPtr: " << ballsPtr << std::endl;
	
	return (0);
}