/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:27:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 17:07:20 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	AForm("RobotomyRequest-" + target, 72, 45), _target(target)
{
	if (_target == "")
		throw std::invalid_argument("Invalid target");
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	AForm(src), _target(src._target)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

void	RobotomyRequestForm::formsAction(void) const
{
	std::cout << "Drilling noises..." << std::endl;
	std::cout << "Drilling noises.." << std::endl;
	std::cout << "Drilling noises." << std::endl;
	std::cout << "Drilling noises" << std::endl;
	
	std::srand(std::time(NULL));	//use current time as seed for random generator
	int const	random_value = std::rand();
	
	if (random_value % 2 == 0)
		std::cout << _target << " has been robotomized successfully 🤖 " << std::endl;
	else
		std::cout << "The robotomy of " << _target << " failed 💥💥 " << std::endl;		
}
