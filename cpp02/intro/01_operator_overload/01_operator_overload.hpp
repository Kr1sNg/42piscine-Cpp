/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_operator_overload.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:34:26 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 12:55:06 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// +(1, 1) => functional quotation

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer
{
	public:
		Integer(int const n);
		~Integer(void);
		
		int	getValue(void) const;
		
		//rhs : right_hand_side operand
		Integer	&operator=(Integer const &rhs); // it changes the object value so we have to use reference
		Integer operator+(Integer const &rhs) const; //operator is a special keyword!
	
	private:
		int	_n;
};

std::ostream	&operator << (std::ostream &o, Integer const &rhs);

#endif
