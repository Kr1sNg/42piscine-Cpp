/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:54:22 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/01 14:35:51 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Animal
{
	private: // Only accessible from an Animal object
	
	protected: // Accessible from an Animal object and derived object
		int	_numberOfLegs;

	public: // Accessible from wherever
		Animal();
		Animal(Animal const &);
		Animal	&operator=(Animal const &);
		~Animal();
		
		void	run(int distance);
};


class Cat : public Animal
{
	// private:
	// 	int	_numberOfLegs;

	public:
		Cat();
		Cat(Cat const &);
		Cat	&operator=(Cat const &);
		~Cat();
		
		// void	run(int distance);
		
		void	scornSomeone(std::string const &target);
		
};

class Pony : public Animal
{
	// private:
	// 	int	_numberOfLegs;
		
	public:
		Pony();
		Pony(Pony const &);
		Pony	&operator=(Cat const &);
		~Pony();
		
		// void	run(int distance);

		void	doMagic(std::string const &target);
};
