/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 17:40:15 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
	
	// const Animal	*array[10];
	
	// for (int i = 0; i < 5; i++)
	// {
	// 	array[i] = new Dog();
	// }
	// for (int i = 5; i < 10; i++)
	// {
	// 	array[i] = new Cat();
	// }

	// for (int i = 0; i < 10; i++)
	// {
	// 	std::cout << array[i]->getType() << "_" << i << ": ";
	// 	array[i]->makeSound();
	// }
	// std::cout << std::endl;

	// for (int i = 0; i < 10; i++)
	// {
	// 	delete array[i];
	// }
	
	
	return 0;
}