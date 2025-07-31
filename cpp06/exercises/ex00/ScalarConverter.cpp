/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:43:27 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 23:10:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	(void)src;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return (*this);
}

static bool	isChar(std::string const &s)
{
	return (s.length() == 1 && !std::isdigit(s[0]));
}

void	ScalarConverter::convert(std::string const &s)
{
	char	c = 0;
	int		i = 0;
	float	f = 0.0f;
	double	d = 0.0;
	
	if (isChar(s))
	{
		c = s[0];
		i = static_cast<int>(c);
		f = static_cast<float>(c);
		d = static_cast<double>(c);
		
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << i << std::endl;
		// fixed: forces the output show a decimal point
		// setprecision(n): shows exactly n decimal digit
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	}
	else
	{
		d = atof(s.c_str());
		c = static_cast<char>(d);
		i = static_cast<int>(d);
		f = static_cast<float>(d);
		
		if (s == "nan" || s == "nanf" || d < 0 || d > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(c))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c << "'" << std::endl;
		
		if (s == "nan" || s == "nanf" || d < INT_MIN || d > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	}	
}
