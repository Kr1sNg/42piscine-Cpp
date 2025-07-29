/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:59:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 12:30:46 by tat-nguy         ###   ########.fr       */
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
			
		AForm	*formS = someRandomIntern.makeForm("shrubbery creation", "garden");
		std::cout << "Form S's name: " << (*formS).getName() << std::endl;
			
		AForm	*formP = someRandomIntern.makeForm("presidential pardon", "country");
		std::cout << "Form P's name: " << (*formP).getName() << std::endl;	
		
		delete	rrf;
		delete	formS;
		delete	formP;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected error" << std::endl;
	}
	
	std::cout << std::endl;
	// we try to create a form with invalid name => error
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
