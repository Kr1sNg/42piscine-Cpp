/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05-dynamic_cast.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:28:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 18:22:14 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
🔹 2️⃣ dynamic_cast
✅ Purpose:
	- Safe downcasting (base → derived) for polymorphic classes (classes with at least one virtual function).
	- Performs runtime type check. Returns nullptr for invalid pointer casts.
	If it's valid, the expression is converted to the target type.
	The target type must be a pointer or a reference to a polymorphic class or a void pointer.
🚫 Not available:
	- For non-polymorphic classes. Has a runtime cost.
*/

#include <iostream>

class Parent	{
	public:
		Parent() {
			std::cout << "Parent is created!" << std::endl;
		}
		virtual ~Parent() {
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
	Child1		a;			// Reference value
	Parent *	b = &a;		// Implicit upcast -> OK
	Child2		ch;
	Parent &	f = ch;

	// Explicit downcast -> Suspens...
	Child1 *	c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
		std::cout << "Conversion 1 is NOT OK" << std::endl;
	else
		std::cout << "Conversion 1 is OK" << std::endl;
	
	// Explicit downcast -> Suspens...
	try
	{
		Child1 &	d = dynamic_cast<Child1 &>(f);
		std::cout << "Conversion 2 is OK" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "Conversion 2 is NOT OK: " << e.what() << std::endl;
		return (-42);
	}
	
	return (0);
}