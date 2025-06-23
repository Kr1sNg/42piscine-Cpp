/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_passing_parameters_by_ref.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 18:35:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 19:07:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	byPtr(std::string *str)
{
	*str += " and pointer";
}

void	byConstPtr(std::string const *str) //read-only
{
	std::cout << *str << std::endl;
}

void	byRef(std::string &str)
{
	str += " and reference";
}

void	byConstRef(std::string const &str) //read-only
{
	std::cout << str << std::endl;
}

int	main(void)
{
	std::string	str = "i like cpp";
	
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	
	str = "i hate python";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}