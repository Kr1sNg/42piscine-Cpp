/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 20:08:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/20 22:46:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &b)
{
	ostream << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (ostream); 
}

Bureaucrat::Bureaucrat(std::string const &n, int const &g): _name(n), _grade(g)
{
	if (_name == "")
		throw std::invalid_argument("Invalid Name");
	if (_grade <= 0)
		throw GradeTooHighException();
	if (_grade >= 151)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name), _grade(src._grade)
{
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

void	Bureaucrat::increment(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrement(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade += 1;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade Too High Exception!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade Too Low Exception!");
}

void	Bureaucrat::signForm(Form f)
{
	f.beSigned(*this);
	if (f.getIsSigned())
		std::cout << _name << " signed " << f.getName() << std::endl;
	else
		std::cout << _name << " couldn't sign " << f.getName()
					<< " because grade is too low." << std::endl;
}
