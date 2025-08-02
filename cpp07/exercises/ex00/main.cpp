/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 00:12:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 18:44:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ::swap(), ::min(), ::max() forces the use of the global version of the function,
	avoiding clashes with std::min/std::max in std library
*/

#include "whatever.hpp"
#include "test.hpp"
#include <string>
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "string 01";
	std::string d = "string 02";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	//-- more test --
	Test	e(1337);
	Test f = 42;
	
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << ::min(e, f) << std::endl;
	std::cout << "max(e, f) = " << ::max(e, f) << std::endl;
	
	return 0;
}
