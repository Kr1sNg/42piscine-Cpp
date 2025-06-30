/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 06:59:55 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/30 09:07:19 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>

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
		
};

#endif
