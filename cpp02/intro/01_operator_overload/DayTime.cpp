/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DayTime.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:09:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 07:47:52 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DayTime.hpp"

DayTime::DayTime(int h, int m, int s): hour(h), minute(m), second(s)
{
	return ;
}
DayTime::~DayTime(void)
{
	return ;
}
		
bool	DayTime::setTime(int hour, int minute, int second)
{
	if (hour >= 0 && minute >= 0 && second >= 0)
	{
		hour = hour;
		minute = minute;
		second = second;
		return (true);
	}
	return (false);
	
}

int	DayTime::getHour(void) const
{
	return (hour);
}

int	DayTime::getMinute(void) const
{
	return (minute);
}

int	DayTime::getSecond(void) const
{
	return (second);
}

int	DayTime::asSeconds(void) const
{
	return (60*60*hour + 60*minute + second);
}

bool	DayTime::operator<(const DayTime& t) const //compare *this and t
{
	return (asSeconds() < t.asSeconds());
}

DayTime	&DayTime::operator++(void) // increment second
{
	++second;
	return (*this);
}

void	DayTime::print(void) const
{
	std::cout << hour << " hour " << minute << " miniute " << second << " second " << std::endl;
}

int	main(void)
{
	DayTime	depart1(11, 11, 11);
	DayTime	depart2(12, 0, 0);

	depart1.print();
	depart2.print();
	if (depart1 < depart2)
	{
		std::cout << "The 1st plane takes off earlier!" << std::endl;
	}

	std::cout << "operator++ : " << std::endl;
	++depart1;
	depart1.print();

}