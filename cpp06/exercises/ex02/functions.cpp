/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:55:42 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 23:33:18 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base	*generate(void)
{
	srand(time(0));
	int	random = rand() % 100;
	
	if (random % 3 == 0)
		return (new A());
	else if (random % 3 == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	A *numa = dynamic_cast<A *>(p);
	if (!numa)
	{
		B *numb = dynamic_cast<B *>(p);
		if (!numb)
		{
			C *numc = dynamic_cast<C *>(p);
			if (!numc)
				std::cerr << "Cannot identify this object" << std::endl;
			else
				std::cout << "C" << std::endl;
		}
		else
			std::cout << "B" << std::endl;
	}
	else
		std::cout << "A" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &numa = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)numa;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B &numb = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
			(void)numb;
		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C &numc = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
				(void)numc;
			}
			catch(const std::bad_cast& e)
			{
				std::cerr << "Exception: " << e.what() << std::endl;
			}
		}
	}
}
