/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-upcast_downcast.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:50:58 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 22:18:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this file, we still use C cast for Cpp cast

#include <iostream>

class Parent	{
	public:
		Parent() {
			std::cout << "Parent is created!" << std::endl;
		}
		~Parent() {
			std::cout << "Parent is destroyed!" << std::endl;
		}
};
class Child1: public Parent {
	public:
		Child1() {
			std::cout << "Child1 is created!" << std::endl;
		}
		~Child1() {
			std::cout << "Child1 is destroyed!" << std::endl;
		}
};
class Child2: public Parent {
	public:
		Child2() {
			std::cout << "Child2 is created!" << std::endl;
		}
		~Child2() {
			std::cout << "Child2 is destroyed!" << std::endl;
		}
};

int	main(void)
{
	Child1	a;						// Reference value
	
	Parent*	b = &a;					// Implicit 'reinterpretion' cast (parent* as void* and child1 as float)
	Parent*	c = (Parent*)&a;		// Explicit 'reinterpretion' cast
	
	Parent* d = &a;					// Implicit upcast -> OK -> hiding cast (Paarent*) Child1 a upto Parent
	// Child1* e = d;					// Implicit downcast -> NO!!!
	Child2*	f = (Child2*)d;			// Explicit downcast -> OK but really? -> Issue of runtime since casting Child2 to Child1

	// (void)b;
	// (void)c;
	// (void)f;
	return (0);
}
