/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-static_cast.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:47:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 18:20:18 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
🔹 1️⃣ static_cast
✅ Purpose:
	- Compile-time conversion between compatible types.
	- Safe for conversions where the compiler can check correctness.
	- Used for upcasting (derived → base) and explicit numeric conversions.
🚫 Not for:
	- Downcasting (base → derived) unless you're 100% sure of the type. No runtime check.
*/

/*
int	main(void)
{
	int		a = 42;		// Reference value
	
	double	b = a;		// Implicit promotion -> OK

	int		c = b;		// Implicit demotion -> NO
	int		d = static_cast<int>(b);	// Explicit demotion -> OK -> C++ static_cast as (int)
}
*/

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

class	Unrelated {
	public:
		Unrelated() {
			std::cout << "Unrelated is created!" << std::endl;
		}
		~Unrelated() {
			std::cout << "Unrelated is destroyed!" << std::endl;
		}
};

int	main(void)
{
	Child1	a;								// Reference value
	
	Parent*	b = &a;							// Implicit upcast -> OK
	// Child1* c = b;							// Implicit downcast -> NO!
	Child2*	f = static_cast<Child2*>(b);	// Explicit downcast -> OK!
	
	// Unrelated* e = static_cast<Unrelated *>(&a);	// Explicit conversion -> NO!

	return (0);
}


