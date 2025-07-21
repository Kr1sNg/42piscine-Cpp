/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:09:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 16:59:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
# define _FORM_

# include <string>
# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
	
	protected:
		virtual void	formsAction(void) const = 0;
	
	public:
		AForm(std::string const &n = "DefaultForm", int const &g = 150, int const &e = 150);
		virtual ~AForm() = 0;
		AForm(AForm const &src);
		AForm	&operator=(AForm const &rhs);
		
		class GradeTooHighException: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		class GradeTooLowException: public std::exception
		{
			public:
				const char	*what() const throw();
		};
		
		std::string const	&getName(void) const;
		bool const			&getIsSigned(void) const;
		int const			&getSignGrade(void) const;
		int const			&getExecGrade(void) const;

		void	beSigned(Bureaucrat &b);
		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &ostream, AForm const &f);


# endif