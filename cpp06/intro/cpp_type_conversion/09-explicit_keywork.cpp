/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09-explicit_keywork.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:45:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 22:11:11 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	explicit keyword allows to disable implicit conversions and require user to write it explicitly
	✅ Key rules:
		- Only applies to constructors with a single parameter (or multiple with default values).	
		- Requires the caller to be explicit when creating the object.
		- Helps avoid accidental type conversions.
*/

#include <iostream>

class A {};
class B {};

class C
{
	public:
					C(A const & _) {return; }	// both return C class => it's like a method to cast A, B to C
		explicit	C(B const & _) {return; }

};

void	f(C const & _)
{
	return ;
}

int	main(void)
{
	f(A()); // => Implicit converstion (from A to C) is OK here
	
	// f(B()); // => Implicit converstion (from B to C) is not OK as constructor is explicit
	f(C(B())); // => need to constructor C from B first
	
	return (0);
}