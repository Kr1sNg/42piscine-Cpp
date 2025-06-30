/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Euro.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 07:53:06 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 11:54:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_EURO_HPP_
#define _EURO_HPP_

#include <sstream> // for stringstream
#include <iomanip>
#include <iostream>

class Euro
{
	private:
		long	data;
	public:
		Euro(int euro = 0, int cents = 0);
		Euro(double x);
		~Euro(void);
		
		long		getWholePart(void) const;
		int			getCents(void) const;
		double		asDouble(void) const;
		std::string	asString(void) const;
		void		print(std::ostream &os) const;
		
		Euro	operator+(const Euro &e) const;
		Euro	operator-(const Euro &e) const;
		Euro	&operator+=(const Euro &e); // => it changes its operand (the object) so we have to use reference 
		Euro	&operator-=(const Euro &e);
		
};

std::ostream	&operator<<(std::ostream &os, const Euro &e);
std::istream	&operator>>(std::istream &is, Euro &e);


#endif