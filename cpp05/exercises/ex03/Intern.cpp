/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:51:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 17:52:40 by tat-nguy         ###   ########.fr       */
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

Intern::Intern(Intern const &src)
{
	(void)src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

static AForm	*makeShrubbery(std::string const &target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

static AForm	*makeRobotomy(std::string const &target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

static AForm	*makePresidential(std::string const &target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string const &FormName, std::string const &target)
{
	std::string	formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	AForm	*(*functions[3])(std::string const &) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	
	int	i = 0;
	while (i < 3)
	{
		if (formList[i].compare(FormName) == 0)
			return (functions[i](target));
		++i;
	}
	throw std::invalid_argument("Invalid Form Name");
}
