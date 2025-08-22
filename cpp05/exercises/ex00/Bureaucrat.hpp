/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:53:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/20 19:25:45 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAU_
# define _BUREAU_

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>
# include <stdexcept>

class Bureaucrat
{
	private:
		std::string	const	_name;
		int					_grade;
		
	public:
		class GradeTooHighException: public std::exception
		{
			public:
				const char	*what() const throw();  // function promises not to throw any exceptions or "no exception allowed here" => to guarantee the operation of what()
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
		
};

std::ostream	&operator<<(std::ostream &ostream, Bureaucrat const &b);

#endif
