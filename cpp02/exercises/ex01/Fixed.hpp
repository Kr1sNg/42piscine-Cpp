/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 11:50:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_FIXED_HPP_
# define _FIXED_HPP_
# include <iostream>
# include <cmath> //for roundf(): returns the nearest int 

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	
	public:
		Fixed(void);							// default constructor
		Fixed(Fixed const &src);				// copy constructor
		Fixed &operator=(Fixed const &rhs);		// copy assignment operator overload
		~Fixed(void);							// destructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int i);
		Fixed(const float f);
		
		float	toFloat(void) const;
		int		toInt(void) const;
		
};

std::ostream	&operator<<(std::ostream &o, Fixed const &n);

#endif
