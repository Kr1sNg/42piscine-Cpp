/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:59:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 17:21:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	try
	{
		AForm	*rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
			
		AForm	*formA = someRandomIntern.makeForm("shrubbery creation", "garden");
		std::cout << "Form A's name: " << (*formA).getName() << std::endl;
			
		AForm	*formF = someRandomIntern.makeForm("presidential pardon", "country");
		std::cout << "Form F's name: " << (*formF).getName() << std::endl;	
		
		delete	rrf;
		delete	formA;
		delete	formF;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected error" << std::endl;
	}
	
	try
	{
		AForm	*formEr = someRandomIntern.makeForm("name", "error");
		std::cout << "Form Error's name: " << (*formEr).getName() << std::endl;
	
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected error" << std::endl;
	}
	
	return (0);
}
