/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:08:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 18:28:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &b)
{
	ostream << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (ostream); 
}

Bureaucrat::Bureaucrat(std::string const &n, int const &g)
	throw (Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException): _name(n)
{
	if (g <= 0)
		throw GradeTooHighException();
	if (g >= 151)
		throw GradeTooLowException();
	_grade = g;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name("copy")
{
	_grade = src._grade; //bcs const _name can't be changed
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

std::string const	&Bureaucrat::getName(void) const
{
	return _name;
}

int const	&Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::increment(void) throw (Bureaucrat::GradeTooHighException)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrement(void) throw (Bureaucrat::GradeTooLowException)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade += 1;
}
