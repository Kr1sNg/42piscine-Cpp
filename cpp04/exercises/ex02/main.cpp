/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/06 22:24:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	// const AAnimal* meta = new AAnimal(); //-> Abstract class => can't instantiate object
	// AAnimal meta(void); 					//-> Abstract class => can't instantiate object
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	return 0;
}