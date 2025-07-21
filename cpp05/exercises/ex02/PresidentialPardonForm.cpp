/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 08:27:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 13:24:43 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	AForm("PresidentialPardon-" + target, 25, 5), _target(target)
{
	if (_target == "")
		throw std::invalid_argument("Invalid target");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
	AForm(src), _target(src._target)
{	
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if(this != &rhs)
	{
		AForm::operator=(rhs);
	}
	return (*this);
}

void PresidentialPardonForm::formsAction(void) const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox 🎁 " << std::endl;
}
