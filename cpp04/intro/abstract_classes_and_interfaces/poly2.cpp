/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:22:32 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 18:25:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ACharacter
{
	private:
		std::string	name;
	public:
		ACharacter()
		{
			std::cout << "Constructor of class ACharacter" << std::endl;
		}
		virtual ~ACharacter()
		{
			std::cout << "Destructor of class ACharacter" << std::endl;
		}
		virtual void	attack(std::string const &target) = 0;
		void			sayHello(std::string const &target);

};

class Warrior: public ACharacter
{
	public:
		Warrior()
		{
			std::cout << "Constructor of class Warrior" << std::endl;
		}
		~Warrior()
		{
			std::cout << "Destructor of class Warrior" << std::endl;
		}
		virtual void	attack(std::string const &target);
};

void	ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void	Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
}

// class ICoffeeMaker //Interface
// {
// 	public:
// 		ICoffeeMaker()
// 		{
// 			std::cout << "Constructor of class ICoffeeMaker" << std::endl;
// 		}
// 		~ICoffeeMaker()
// 		{
// 			std::cout << "Destructor of class ICoffeeMaker" << std::endl;
// 		}
// 		virtual void	fillWaterTank(IWaterSource *src) = 0;
// 		virtual ICoffee	*makeCoffee(std::string const &type) = 0;
// };

int	main(void)
{
	ACharacter	*a = new Warrior();

	a->sayHello("Chris");
	a->attack("Roger");

	delete a;
	
	return (0);
}
