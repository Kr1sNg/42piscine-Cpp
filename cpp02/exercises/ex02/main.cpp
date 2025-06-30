/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 22:25:20 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {

	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}


// int main() {
	
//     Fixed a(2.25f);
//     Fixed b(3.5f);
//     Fixed c(a); // copy constructor

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     std::cout << "c = " << c << " (copy of a)" << std::endl;

//     // 🔍 Comparison operators
//     std::cout << "\n🔍 Comparisons:" << std::endl;
//     std::cout << "a < b: " << (a < b) << std::endl;
//     std::cout << "a > b: " << (a > b) << std::endl;
//     std::cout << "a <= c: " << (a <= c) << std::endl;
//     std::cout << "a >= c: " << (a >= c) << std::endl;
//     std::cout << "a == c: " << (a == c) << std::endl;
//     std::cout << "a != b: " << (a != b) << std::endl;

//     // ➕ Arithmetic operators
//     std::cout << "\n➕ Arithmetic:" << std::endl;
//     std::cout << "a + b = " << (a + b) << std::endl;
//     std::cout << "b - a = " << (b - a) << std::endl;
//     std::cout << "a * b = " << (a * b) << std::endl;
//     std::cout << "b / a = " << (b / a) << std::endl;

//     // ⬆️ Increment/Decrement
//     Fixed d(1.0f);
//     std::cout << "\n⬆️ Increment / Decrement:" << std::endl;
//     std::cout << "d = " << d << std::endl;
//     std::cout << "++d = " << ++d << std::endl;
//     std::cout << "d++ = " << d++ << std::endl;
//     std::cout << "d after d++ = " << d << std::endl;
//     std::cout << "--d = " << --d << std::endl;
//     std::cout << "d-- = " << d-- << std::endl;
//     std::cout << "d after d-- = " << d << std::endl;

//     // 📉 Test min and max
// 	std::cout << "\n Min / Max:" << std::endl;
// 	Fixed x(10.5f);
//     Fixed y(42.25f);
//     const Fixed cx(99.99f);
//     const Fixed cy(7.5f);

// 	std::cout << "x, y: " << x << " , " << y << std::endl;
//     std::cout << "min(x, y) = " << Fixed::min(x, y) << std::endl;
//     std::cout << "max(x, y) = " << Fixed::max( x, y ) << std::endl;
    
// 	std::cout << "cx, cy: " << cx << " , " << cy << std::endl;
// 	std::cout << "min(cx, cy) = " << Fixed::min(cx, cy) << std::endl;
//     std::cout << "max(cx, cy) = " << Fixed::max(cx, cy) << std::endl;

//     return 0;
// }
