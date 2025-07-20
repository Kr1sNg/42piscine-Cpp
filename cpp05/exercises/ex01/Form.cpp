/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:58:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/20 22:57:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

std::ostream	&operator<<(std::ostream &ostream, Form const &f)
{
	std::string s = "is not signed";
	if (f.getIsSigned())
		s = "is signed";
	ostream << "Form " << f.getName() << ": " << s
			<< " with grade required to sign is: " << f.getSignGrade()
			<< " and grade required to execute is: " << f.getExecGrade()
			<< std::endl;
	return ostream;
}

Form::Form(std::string const &n, int const &g, int const &e):
	_name(n), _isSigned(false), _signGrade(g), _execGrade(e)
{
	if (_name == "")
		throw std::invalid_argument("Invalid Name");
	if (_signGrade < 1 || _execGrade < 1)
		throw GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw GradeTooLowException();
} 

Form::~Form()
{	
}

Form::Form(Form const &src): _name(src._name), _isSigned(src._isSigned),
	_signGrade(src._signGrade), _execGrade(src._execGrade)
{
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string const	&Form::getName(void) const
{
	return (_name);
}

bool const	&Form::getIsSigned(void) const
{
	return (_isSigned);
}

int const	&Form::getSignGrade(void) const
{
	return (_signGrade);
}

int const	&Form::getExecGrade(void) const
{
	return (_execGrade);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade Too High Exception");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade Too Low Exception");
}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= _signGrade)
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
}
