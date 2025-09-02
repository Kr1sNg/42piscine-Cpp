/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:04:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/02 15:04:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool    validExpression(std::string const &expr)
{
    std::string::const_iterator it = expr.begin();
    while (it != expr.end() && (std::isdigit(*it) || std::isspace(*it) 
        || *it == '+' || *it == '-' || *it == '*' || *it == '/'))
        it++;
    return (!expr.empty() && it == expr.end())
}

bool    calculate(char *s)
{
    std::stack<int> stack;
    std::string expr = s;

    if (!validExpression(expr))
    {
        std::cout << "Error" << std::endl;
        return (false);
    }
    
    int num = std::atoi(s)
    
}