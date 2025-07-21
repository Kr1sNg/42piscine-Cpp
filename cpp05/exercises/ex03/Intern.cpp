/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:51:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 16:51:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
}

Intern::~Intern()
{
}

AForm	*Intern::makeForm(std::string const &FormName, std::string const &target)
{
	std::string	formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	int	i = 0;
	while (i < 3)
	{
		if (formList[i].compare(FormName) == 0)
			break ;
		++i;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates RobotomyRequestForm" << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates PresidentialPardonForm" << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			throw std::invalid_argument("Invalid Form Name");
	}
}
