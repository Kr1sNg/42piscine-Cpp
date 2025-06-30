/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Euro.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 08:02:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 12:16:45 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Euro.hpp"

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
		
Euro	Euro::operator+(const Euro &e) const
{
	Euro	temp;
	
	temp.data = this->data + e.data;
	return (temp);
}

Euro	Euro::operator-(const Euro &e) const
{
	Euro	temp;
	
	temp.data = this->data - e.data;
	return (temp);
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

std::ostream	&operator<<(std::ostream &os, const Euro &e)
{
	os << e.asString() << " EURO";
	return (os);
}

std::istream	&operator>>(std::istream &is, Euro &e)
{
	std::cout << "Euro ammount (Format ...x.xx): ";
	int		euro = 0, cents = 0;
	char	c = 0;
	
	if (!(is >> euro >> c >> cents))
		return (is);
	if ((c != '.') || cents >= 100)
		is.setstate(std::ios::failbit);
	else
		e = Euro(euro, cents);
	return (is); 
}

int	main(void)
{
	std::cout << " *** Testing class Euro ***" << std::endl;
	
	Euro	wholesale;
	Euro	retail;
	
	std::cin >> wholesale; // thanks to &operator>> we can use class Euro directly with input/output
	retail = wholesale;
	retail += 9.49; // <=> += (Euro)9.49

	std::cout << "Wholesale price: ";
	// wholesale.print(std::cout);
	std::cout << wholesale << std::endl;
	
	std::cout << "Retail price: ";
	retail.print(std::cout);
	
	Euro	discount;
	std::cout << "Discount ";
	std::cin >> discount;
	retail -= discount;
	
	std::cout << "Retail price including discount: ";
	retail.print(std::cout);

	wholesale = 34.10;
	std::cout << "New wholesale price: ";
	wholesale.print(std::cout);

	Euro	profit(retail - wholesale);
	std::cout << "Profit: ";
	profit.print(std::cout);

	return (0);
}
