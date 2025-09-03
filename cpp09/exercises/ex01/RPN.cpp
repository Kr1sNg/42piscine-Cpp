/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:04:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/03 19:29:38 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{	
}

RPN::~RPN()
{
}

bool    RPN::validExpression(std::string const &expr)
{
	std::string::const_iterator it = expr.begin();
	int	n_number = 0;
	int	n_op = 0;
	
	while (it != expr.end() && (std::isdigit(*it) || std::isspace(*it)
		|| *it == '+' || *it == '-' || *it == '*' || *it == '/'))
	{
		if (std::isdigit(*it))
			n_number++;
		if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
			n_op++;
		it++;
	}	
	return (!expr.empty() && it == expr.end() && (n_number == n_op + 1));
}

float RPN::calculate(char *av)
{
	std::string expr(av);
	
	if (!validExpression(expr))
	{
		throw std::invalid_argument("Error");
	}
	
	std::istringstream	iss(expr);
	std::string			token;
	
	while (iss >> token)
	{
		if (token.size() < 2 && (token == "+" || token == "-" || token == "*" || token == "/"))
		{
			float a = 0;
			float b = 0;
			
			if (stak.size() < 2)
				throw std::length_error("Error: Missing numbers");
			
			b = stak.top();
			stak.pop();
			a = stak.top();
			stak.pop();
			
			if (token == "+")
				stak.push(a + b);
			else if (token == "-")
				stak.push(a - b);
			else if (token == "*")
				stak.push(a * b);
			else if (token == "/")
			{
				if (b == 0)
					throw std::runtime_error("Error: Division by zero");
				stak.push(a / b);
			}
		}
		else
		{
			int num = std::atoi(token.c_str());
			if (token.size() > 1 || num > 9 || num < 0)
				throw std::invalid_argument("Error: Invalid argument");
			stak.push(static_cast<float>(num));
		}
	}
	return (stak.top());
}
