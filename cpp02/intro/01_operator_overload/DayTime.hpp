/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DayTime.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 18:59:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 07:09:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DAYTIME_HPP_
# define _DAYTIME_HPP_

#include <iostream>

class DayTime
{
	private:
		short	hour, minute, second;
		bool	overflow;
	public:
		DayTime(int h = 0, int m = 0, int s = 0); // Default arguments only here
		~DayTime(void);
		
		bool	setTime(int hour, int minute, int second = 0); // Default arguments only here
		int		getHour(void) const;
		int		getMinute(void) const;
		int		getSecond(void) const;
		int		asSeconds(void) const;
		
		bool	operator<(const DayTime& t) const; //compare *this and t (is less than) => binary operator
		
		DayTime	&operator++(void); // increment second => unary operator
		
		void	print(void) const;
};

#endif