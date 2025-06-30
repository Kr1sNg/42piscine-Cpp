/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 08:28:12 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 17:14:20 by tat-nguy         ###   ########.fr       */
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
		static const int	_bits = 8; // static : value shared between all objects of class
	
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

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		Fixed	&operator++(void);	// ++Fixed
		Fixed	operator++(int);	// Fixed++ // return oldvalue but _value++
		Fixed	&operator--(void);
		Fixed	operator--(int);
		

		// static in class, means that it belongs to the class itself (not to any object), can be called without an instance
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static Fixed const	&min(Fixed const &n1, Fixed const &n2); // can't modify the return value
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static Fixed const	&max(Fixed const &n1, Fixed const &n2);
		
		
};

std::ostream	&operator<<(std::ostream &o, Fixed const &n);

#endif
