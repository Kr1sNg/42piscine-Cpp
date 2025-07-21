/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:59:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 13:41:37 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	burC("Officer C", 140); // able to sign Shrubb but not execute
		std::cout << burC << std::endl;
		Bureaucrat	burB("Assistant B", 70); // able to sign Robot but not execute
		std::cout << burB << std::endl;
		Bureaucrat	burM("Manager M", 20); // able to sign Pres but not execute
		std::cout << burM << std::endl;
		Bureaucrat	burA("Chef A", 2); // able to sign and execute everything
		std::cout << burA << std::endl;
			
		ShrubberyCreationForm formE("Easy");
		std::cout << formE << std::endl;
		RobotomyRequestForm	formM("Medium");
		std::cout << formM << std::endl;
		PresidentialPardonForm formH("Hard");
		std::cout << formH << std::endl;

		std::cout << std::endl;

		std::cout << ">>-- Test Officer C: can only sign Easy form --<<" << std::endl;
		burC.executeForm(formE);
		burC.signForm(formE);
		std::cout << formE << std::endl;
		burC.executeForm(formE);
		burC.signForm(formM);
		
		std::cout << std::endl;
		std::cout << ">>-- Test Assitant B: can sign upto Medium form --<<" << std::endl;
		std::cout << formE << std::endl;
		burB.executeForm(formE);
		burB.signForm(formM);
		std::cout << formM << std::endl;
		burB.executeForm(formM);
		
		std::cout << std::endl;
		std::cout << ">>-- Test Manager M: can sign upto Hard form --<<" << std::endl;
		std::cout << formM << std::endl;
		burM.executeForm(formM);
		burM.signForm(formH);
		std::cout << formH << std::endl;
		burM.executeForm(formH);

		
		std::cout << std::endl;
		std::cout << ">>-- Test Chef A: can sign and execute any form --<<" << std::endl;
		burA.signForm(formH);
		burA.executeForm(formH);
		burA.signForm(formM);
		burA.executeForm(formM);
		burA.signForm(formE);
		burA.executeForm(formE);
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
