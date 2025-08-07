/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:01:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/06 10:33:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"
#include <string>

/* example functions to test iter() */
template <typename Type>
void	display(Type const &x)
{
	std::cout << x << std::endl;
}

template <typename Type>
void	incrementInt(Type &x)
{
	x = x + 1;
}

int	main(void)
{
	std::cout << " >-- Test 00: Array of Int --< " << std::endl;
	int			arr_int[] = {0, 1, 2, 3, 4};
	iter(arr_int, 5, incrementInt);
	iter(arr_int, 5, display);

	std::cout << " \n>-- Test 01: Array of Const Int --< " << std::endl;
	int const	arr_const[] = {30, 31, 32, 33};
	// iter(arr_const, 4, incrementInt); //-> can not use func non-const for const elem
	iter(arr_const, 4, display);

	std::cout << " \n>-- Test 02: Array of String --< " << std::endl;
	std::string arr_string[] = {"Hello", "World", "!"};
	iter(arr_string, 3, display);
	
	std::cout << "\n >-- More examples with class Test --< " << std::endl;
	Test	arr_test[3] = {101, 103, 105};
	
	iter(arr_test, 3, incrementInt);
	iter(arr_test, 3, display);
	
	return (0);
}
