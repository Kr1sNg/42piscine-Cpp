/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-typename.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:55:10 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 22:46:14 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// T: global type

// define function template (keyword template to tell compiler that we have a template)
// with typename we want to introduce in the template
template <typename T >		// Template definition
T const &	max(T const & x, T const & y)
{
	return ((x >= y) ? x : y);
}

int	foo(int x)
{
	std::cout << "long computing time" << std::endl;
	return (x);
}

int	main(void)
{
	int	a = 21;
	int	b = 42;

	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl; 		// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max(a, b) << std::endl; 			// Implicit instanciation

	float	c = -1.7f;
	float	d = 4.2f;
	
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max<float>(c, d) << std::endl; 	// Explicit instanciation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max(c, d) << std::endl; 			// Implicit instanciation

	int	ret = max<int>(foo(a), foo(b));				// Explicit instanciation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl; 	
	
	return (0);
}

