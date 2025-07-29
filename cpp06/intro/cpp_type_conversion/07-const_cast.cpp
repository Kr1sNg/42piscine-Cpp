/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07-const_cast.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:56:53 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 19:25:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
🔹 4️⃣ const_cast
✅ Purpose:
	- Add or remove `const` or `volatile` qualifiers.
	(volatile is a qualifier which tells compiler that this variable can change at any time,
	outside the program's control, so don't optimize away any reads or writes to it)
	- Only cast allowed to modify const-ness.
🚫 Dangerous:
	If the original object is actually const in memory (e.g., in read-only segment),
	modifying it after const_cast is undefined behavior.
*/

#include <iostream>

int	main(void)
{
	int	a = 42;								// Reference value
	
	int const * b = &a;						// Implicit promotion -> OK
	std::cout << "const *b: " << *b << " and b: " << b << std::endl;
	// int	*		c = b;						// Implicit demotion -> NO!
	int *		d = const_cast<int *>(b);	// Explicit demotion -> OK => we removed const qualifier
	
	std::cout << "*d: " << *d << " and d: " << d << std::endl;

	return (0);
}