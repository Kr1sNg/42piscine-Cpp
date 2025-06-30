/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Euro_global_op.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 07:53:06 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 20:12:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_EURO_GB_HPP_
#define _EURO_GB_HPP_

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
		
		Euro	&operator+=(const Euro &e); // => it changes its operand (the object) so we have to use reference 
		Euro	&operator-=(const Euro &e);
		
};

// Global operator functions (inline)
inline Euro	operator+(const Euro &e1, const Euro &e2);
inline Euro	operator-(const Euro &e1, const Euro &e2);


#endif