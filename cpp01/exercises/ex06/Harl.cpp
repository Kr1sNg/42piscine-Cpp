/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:40:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 17:17:59 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string level)
{
	complain(level);
	return ;
}
Harl::~Harl(void)
{
	return ;
}

// using switch
void	Harl::complain(std::string level)
{
	std::string	cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// pointers to address of functions
	void	(Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int		i = 0;
	
	while (i < 4)
	{
		if (cmd[i].compare(level) == 0)
			break ;
		i++;
	}
	switch (i)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case (0):
			(this->*functions[0])();
			std::cout << std::endl;
		case (1):
			(this->*functions[1])();
			std::cout << std::endl;
		case (2):
			(this->*functions[2])();
			std::cout << std::endl;
		case (3):
			(this->*functions[3])();
			std::cout << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
			  << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
			  << "I really do!" << std::endl;	
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			  << "You didn't put enough bacon in my burger!\n"
			  << "If you did, I wouldn't be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			  << "I've been coming for years, whereas you started working here just last month."
			  << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}
