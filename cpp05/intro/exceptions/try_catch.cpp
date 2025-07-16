/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_catch.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:41:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 11:28:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "try_catch.hpp"

// Error::Error(std::string const &s): message(s)
// {
	
// }

// Error::~Error(void)
// {
	
// }

// Error::Error(Error const &src): message(src.message)
// {
	
// }
		
// std::string const &Error::getMessage(void) const
// {
// 	return (message);
// }

double	divine(int a, int b)
{
	if (b < 0)
		throw (std::string)"Can't divine by negative";
	if (b == 0)
	{
		Error	obj;
		throw	obj;
	}
	return ((double) a / b);
}

int	main(void)
{
	int		x, y;
	double	res;
	bool	flag = false;

	while (!flag)
	{
		try
		{
			flag = true;
			std::cout << "Enter two positive intergers: ";
			std::cin >> x >> y;
			res = divine(x, y);
			std::cout << x << "/" << y << " = " << res << std::endl;
		}
		catch (std::string &s)
		{
			std::cerr << s << std::endl;
		}
		catch (Error &)
		{
			std::cerr << "Division by zero!" << std::endl;
		}
		catch (...) //all others
		{
			std::cerr << "Unexpected exception!" << std::endl;
			exit(1);
		}
		flag = false;
	}

	return (0);
}

