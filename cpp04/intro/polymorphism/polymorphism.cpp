/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   polymorphism.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:21:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 20:37:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

// keyword: virtual => means dynamic, not static!
// virtual member function/ method

class Character
{
	public:
		virtual void	sayHello(std::string const &target);

};

class Warrior: public Character
{
	public:
		virtual void	sayHello(std::string const &target); // re-define by function overwriting
		
};

class Cat
{

};

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::sayHello(std::string const &target) // for overwrite 
{
	std::cout << "Fuck off " << target << ", I don't like you!" << std::endl;
}

int	main(void)
{
	// it's ok bcs obviously Warrior is a Warrior
	Warrior		*a = new Warrior();

	// it's also ok bcs Warrior is a Character
	Character	*b = new Warrior(); // without keyword virtual, it will act like a Character

	// but it'd not be ok bcs Character is NOT Warrior
	// Warrior		*c = new Character();
	
	a->sayHello("students");

	b->sayHello("Students");

	delete (a);
	delete (b);
	
	return (0);
}
