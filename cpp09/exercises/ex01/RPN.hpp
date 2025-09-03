/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 15:05:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/09/03 19:59:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_
# define _RPN_

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <cstdlib>	// atoi
#include <exception>

class	RPN
{
	private:
		std::stack<double>	stak;
	
		RPN(RPN const &src);
		RPN	&operator=(RPN const &rhs);

		bool	validExpression(std::string const &expr);
	
	public:
		RPN(void);
		~RPN();

		float	calculate(char *av);
		
};

#endif
