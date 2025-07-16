/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:53:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/16 18:34:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAU_
# define _BUREAU_

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;
		
	public:
		class GradeTooHighException
		{
			// no data members
		};
		
		class GradeTooLowException
		{
			//no data members
		};
		
		Bureaucrat(std::string const &n = "Default", int const &g = 150) throw (GradeTooHighException, GradeTooLowException);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		
		std::string	const	&getName(void) const;
		int const			&getGrade(void) const;

		void	increment(void) throw (GradeTooHighException);
		void	decrement(void) throw (GradeTooLowException);
		
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &b);

#endif