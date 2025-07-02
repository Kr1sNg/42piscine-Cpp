/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 08:54:22 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 10:01:46 by tat-nguy         ###   ########.fr       */
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


class Cat: public virtual Animal
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

class Pony: virtual public Animal
{
	// private:
	// 	int	_numberOfLegs;
		
	public:
		Pony();
		Pony(Pony const &);
		Pony	&operator=(Pony const &);
		~Pony();
		
		// void	run(int distance);

		void	doMagic(std::string const &target);
};

class Dome: public Cat, public Pony
{
	private:
		std::string _name;
		// int	_numberOfLegs; // already had
	
	public:
		Dome();
		Dome(Dome const &);
		Dome	&operator=(Dome const &);
		~Dome();
		
		// void	run(int distance); // already had
		// void	scornSomeone(std::string const &target); // already had
		// void	doMagic(std::string const &target); // already had

};
