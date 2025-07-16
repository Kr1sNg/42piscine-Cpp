/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:59:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 18:49:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureauA("officeA");
		Bureaucrat	bureauB("officeB", 2);
		
		std::cout << "A: " << bureauA << std::endl;
		std::cout << "B: " << bureauB << std::endl;
		
		// bureauA.decrement();
		// std::cout << "A: " << bureauA << std::endl;

		bureauB.increment();
		std::cout << "B: " << bureauB << std::endl;
		// bureauB.increment();
		// std::cout << "B: " << bureauB << std::endl;

		// Bureaucrat	bureauC("officeC", 560);
		// std::cout << "C: " << bureauC << std::endl;

	}
	catch (const Bureaucrat::GradeTooHighException &high)
	{
		std::cerr << "Grade Too High Exception" << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &low)
	{
		std::cerr << "Grade Too Low Exception" << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unexpected error" << std::endl;
	}
	return (0);
}
