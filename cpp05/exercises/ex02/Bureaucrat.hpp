/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:53:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 12:44:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAU_
# define _BUREAU_

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>
# include <stdexcept>

class AForm;

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;
		
	public:
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
		
		Bureaucrat(std::string const &n = "Default", int const &g = 150);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		
		std::string	const	&getName(void) const;
		int const			&getGrade(void) const;

		void	increment(void);
		void	decrement(void);

		void	signForm(AForm &f);
		void	executeForm(AForm const &form) const;
		
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &b);

#endif