/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdexcept.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:30:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 12:48:33 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

#define MAX 100

class FloatArr
{
	private:
		double	v[MAX];
	public:
		double		&operator[](int i) throw(std::out_of_range);
		static int	MaxIndex(void) { return (MAX - 1); }
};

double	&FloatArr::operator[](int i) throw(std::out_of_range)
{
	if (i < 0 || i >= MAX)
		throw std::out_of_range("Invalid index!");
	else
		return v[i];
}

int	main(void)
{
	std::cout << "An array with range checking!" << std::endl;
	FloatArr	random;
	int			i;
	
	try
	{
		for (i = 0; i <= FloatArr::MaxIndex(); ++i)
			random[i] = (rand() - RAND_MAX/2) / 100.0F;
	
		std::cout << "Enter indices between 0 and " << FloatArr::MaxIndex() << "!" << std::endl;
	
		while (std::cout << "Index: " && std::cin >> i)
			std::cout << i << ". element: " << random[i] << std::endl;
	}
	catch(std::out_of_range	&err)
	{
		std::cerr << err.what() << std::endl;
	}
	return (0);
}