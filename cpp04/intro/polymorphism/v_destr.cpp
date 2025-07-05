/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_destr.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:42:46 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 15:24:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Base class with a virtual destructor

#include <iostream>
#include <cstring> //for strcpy()

class Base
{
	public:
		Base()
		{
			std::cout << "Constructor of class Base" << std::endl;
		}
		virtual ~Base() // if it's not virtual, 
		{
			std::cout << "Destructor of class Base" << std::endl;
		}
};

class Data
{
	private:
		char	*name;
	public:
		Data(const char *n)
		{
			std::cout << "Constructor of class Data" << std::endl;
			name = new char[strlen(n) + 1];
			strcpy(name, n);
		}
		~Data()
		{
			std::cout << "Destructor of class Data for object: "
					  << name << std::endl;
			delete [] name;
		}		
};

class Derived: public Base
{
	private:
		Data	data;
	public:
		Derived(const char *n): data(n)
		{
			std::cout << "Constructor of class Derived" << std::endl;
		}
		~Derived()
		{
			std::cout << "Destructor of class Derived" << std::endl;
		}
};

int	main(void)
{
	Base *bPtr = new Derived("INTRO");
	
	std::cout << "Call to the virtual Destructor!" << std::endl;
	
	delete bPtr;
	return (0);
}

