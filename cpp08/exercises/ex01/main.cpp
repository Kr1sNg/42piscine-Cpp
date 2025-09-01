/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 08:52:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/11 21:16:17 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{

	/*// >>-- test Span in subject --<<
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
	//*/
	
	/*// >>-- test Span(10) --<<
	Span	a = Span(10);
	int		arr[5] = {3, 5, 7, 9, 11};
	
	try
	{
		a.addNumber(-3);
		a.addNumber(4);
		a.addNumbers(arr, arr + 5);
		a.addNumber(42);
		
		std::cout << "shortestSpan: " << a.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << a.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return (0);
	//*/

	// >>-- test Span (10000) --<<
	Span	super = Span(10000);
	
	int	arr[10000];
	for (int i = 0; i < 10000; ++i)
			arr[i] = i;

	try
	{
		// add array (0 -> 10000) to Span using iterator
		super.addNumbers(arr, arr + 10000);
		// super.displayArr();
		std::cout << "shortestSpan: " << super.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << super.longestSpan() << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
	//*/
}