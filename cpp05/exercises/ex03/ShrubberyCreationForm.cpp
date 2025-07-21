/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:27:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 17:14:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	AForm("ShrubberyCreation-" + target, 145, 137), _target(target)
{
	if (_target == "")
		throw std::invalid_argument("Invalid target");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	AForm(src), _target(src._target)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

void	ShrubberyCreationForm::formsAction(void) const
{
	std::ofstream	file((_target + "_shrubbery").c_str());
	//	bcs std::ofstream doesn't have a constructor that takes a std::string,
	//	it only takes a C-style string const char*
	
	if (!file)
		throw std::runtime_error("Could not create target file.");

	file	<< "     ##\n"
			<< "    ####\n"
    		<< "   #o####\n"
    		<< "  #####o###\n"
			<< "#o#\\#|#/####\n"
    		<< " ###\\|/##o#\n"
    		<< "  # }|{  #\n"
    		<< "    |||\n"
			<< "   _}|{_\n";

	file.close();
	std::cout << "ASCII tree is created inside file requested 🌲  " << std::endl;
}
