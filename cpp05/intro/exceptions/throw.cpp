/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:41:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 12:10:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "throw.hpp"

Error::Error(std::string const &s): message(s)
{
	
}

Error::~Error(void)
{
	
}

Error::Error(Error const &src): message(src.message)
{
	
}
		
std::string const &Error::getMessage(void) const
{
	return (message);
}

double	divine(int a, int b)
{
	if (b < 0)
		throw Error("Can't divine by negative");
	if (b == 0)
		throw Error("Can't divine by zero");
	return ((double) a / b);
}

int	main(void)
{
	
	int		x, y;
	bool	flag = false;

	while (!flag)
	{
		try
		{
			std::cout << "Enter two positive integers: ";
			std::cin >> x >> y;
			double	res = divine(x, y);
			std::cout << x << "/" << y << " = " << res << std::endl;
			flag = true;
		}
		catch (Error &err)
		{
			std::cerr << err.getMessage() << std::endl;
		}
		flag = false;
	}
	
	return (0);
}

