/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:57:38 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/22 12:57:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EXCEPTION_
# define _EXCEPTION_

# include <iostream>
# include <string>

namespace ft
{
	/*-- Exception Base Class --*/
	class exception
	{
		public:
			exception(void) throw()	{};	// promise not to throw any exception
			exception(exception const &src) throw()	{};
			exception	&operator=(exception const &rhs) throw()
			{
				return (*this);
			};
			virtual ~exception() throw()	{};

			virtual std::string const	what(void) const throw()
			{
				return ("ft::exception");
			};
			// it's insane if exception calls another exception
	};
	
	/*-- Out of Range --*/
	class out_of_range: public ft::exception
	{
		private:
			std::string const	s;
			
		public:
			explicit	out_of_range(std::string const &what_arg): s(what_arg)	{};
			// explicit: tuong minh, have to write clearly throw out_of_range("s")
			// if not, (throw "s") could be compilered
			virtual ~out_of_range() throw()	{};
			std::string const	what(void) const throw()
			{
				return	s;
			}
	};
	
	class length_error: public ft::exception
	{
		private:
			std::string const	s;
		
		public:
			explicit	length_error(std::string const &what_arg): s(what_arg)	{};
			virtual ~length_error() throw()	{};
			std::string const	what(void) const throw()
			{
				return	s;
			};
	};
};

#endif
