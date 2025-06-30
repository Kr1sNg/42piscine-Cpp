/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Euro_global_op.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:02:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 20:23:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Euro_global_op.hpp"

Euro::Euro(int euro, int cents)
{
	data = 100L*(long)euro + cents; // L tells compiler it's long type
	return ;
}

Euro::~Euro(void)
{
	return ;
}

Euro::Euro(double x)
{
	x *= 100.0;
	data = (long)(x >= 0.0 ? x + 0.5 : x - 0.5);
}

long	Euro::getWholePart(void) const
{
	return (data / 100);
}

int	Euro::getCents(void) const
{
	return ((int)data % 100);
}

double	Euro::asDouble(void) const
{
	return ((double)data / 100.0);
}

std::string	Euro::asString(void) const
{
	std::stringstream	sso;
	long	temp = data;
	
	if (temp < 0)
	{
		sso << '-';
		temp = -temp;
	}
	sso << temp / 100 << '.' << std::setfill('0') << std::setw(2) << temp % 100;
	return (sso.str());
}

void	Euro::print(std::ostream &os) const
{
	os << asString() << " euro" << std::endl; 
}
		
Euro	&Euro::operator+=(const Euro &e) // => it changes its operand (the object) so we have to use reference 
{
	this->data += e.data;
	return (*this);
}

Euro	&Euro::operator-=(const Euro &e)
{
	this->data -= e.data;
	return (*this); // because actually this is already a pointer to current object Euro *
}


inline Euro	operator+(const Euro &e1, const Euro &e2)
{
	Euro	temp(e1);
	
	temp += e2;
	return (temp);
}

inline Euro	operator-(const Euro &e1, const Euro &e2)
{
	Euro	temp(e1);

	temp -= e2;
	return (temp);
}

int	main(void)
{
	std::cout << " *** Testing class Euro ***" << std::endl;
	
	Euro	wholesale(20, 50);
	Euro	retail;
	
	retail = wholesale;
	retail = 9.49 + retail;

	
	std::cout << "Wholesale price: ";
	wholesale.print(std::cout);
	
	std::cout << "Retail price: ";
	retail.print(std::cout);
	
	Euro	discount(2.10);
	retail = retail - discount;
	std::cout << "Retail price including discount: ";
	retail.print(std::cout);

	retail = 34.10;
	std::cout << "New retail price: ";
	retail.print(std::cout);

	Euro	profit(34.10 - wholesale);
	std::cout << "Profit: ";
	profit.print(std::cout);

	return (0);
}
