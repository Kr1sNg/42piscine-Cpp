/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:09:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/20 22:50:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_
# define _FORM_

# include <string>
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
	
	public:
		Form(std::string const &n = "DefaultForm", int const &g = 50, int const &e = 50);
		~Form();
		Form(Form const &src);
		Form	&operator=(Form const &rhs);
		
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

		void	beSigned(Bureaucrat const &b);
		
};

std::ostream	&operator<<(std::ostream &ostream, Form const &f);


# endif