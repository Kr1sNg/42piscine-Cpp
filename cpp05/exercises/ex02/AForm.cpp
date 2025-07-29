/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:58:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 12:06:55 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::ostream	&operator<<(std::ostream &ostream, AForm const &f)
{
	std::string s = f.getIsSigned() ? "is signed." : "is not signed.";

	ostream << f.getName() << " form, has required grades to sign is " << f.getSignGrade()
			<< " and to execute is " << f.getExecGrade() << ", " << s;
	return ostream;
}

AForm::AForm(std::string const &n, int const &g, int const &e):
	_name(n), _isSigned(false), _signGrade(g), _execGrade(e)
{
	if (_name == "")
		throw std::invalid_argument("Invalid Name");
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
} 

AForm::~AForm()
{	
}

AForm::AForm(AForm const &src): _name(src._name), _isSigned(src._isSigned),
	_signGrade(src._signGrade), _execGrade(src._execGrade)
{
}

AForm	&AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string const	&AForm::getName(void) const
{
	return (_name);
}

bool const	&AForm::getIsSigned(void) const
{
	return (_isSigned);
}

int const	&AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int const	&AForm::getExecGrade(void) const
{
	return (_execGrade);
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High Exception");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low Exception");
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (_isSigned)
		return ;
	if (b.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw std::invalid_argument(getName() + " form is not signed yet!");
	if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
	formsAction();
}
