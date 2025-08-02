/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:46:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 18:53:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>  // srand(), rand()
#include <ctime>    // time(NULL)
#include <iostream>
#include "Array.hpp"

/*
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/

int main() {
	std::cout << ">--- Test 00: Empty Array ---<" << std::endl;
	Array<int> empty;
	std::cout << "Size: " << empty.size() << std::endl;

	std::cout << ">--- Test 01: Array of 5 random elements ---<" << std::endl;
	Array<int> arrInt(5);
    srand(time(NULL));
    for (unsigned int i = 0; i < arrInt.size(); ++i)
    {
        int random = rand() % 100;
        arrInt[i] = random;
    }
	for (unsigned int i = 0; i < arrInt.size(); ++i)
		std::cout << "Int[" << i << "] = " << arrInt[i] << std::endl;

    try
    {
		std::cout << ">--- Test 02: Out of range ---<" << std::endl;
		std::cout << arrInt[42] << std::endl;
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	std::cout << ">--- Test 03: Value of default initialization ---<" << std::endl;
	Array<int> numbers(3);
	for (unsigned int i = 0; i < numbers.size(); ++i)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

	return (0);
}
