/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:01:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 11:59:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "test.hpp"
#include <string>

int	main(void)
{
	int	tab_int[] = {0, 1, 2, 3, 4};
	int const	tab_const[] = {30, 31, 32, 33};
	std::string tab_string[] = {"Hello", "World", "!"};
	
	iter(tab_int, 5, incrementInt);
	iter(tab_int, 5, display);
	// iter(tab_const, 4, incrementInt); //-> can not use func non-const for const elem
	iter(tab_const, 4, display);
	iter(tab_string, 3, display);
	
	std::cout << " >-- More examples with class Test --< " << std::endl;
	Test	tab_aw[3] = {101, 103, 105};
	
	iter(tab_aw, 3, incrementInt);
	iter(tab_aw, 3, display);
	
	return (0);
}
