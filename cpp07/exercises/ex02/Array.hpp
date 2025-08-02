/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:02:22 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 17:49:49 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARR_
# define _ARR_

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	
	public:
		Array(void);
		Array(unsigned int n);
		~Array();
		Array(Array const &src);
		Array	&operator=(Array const &rhs);

		T const	&operator[](unsigned int index) const;  // read-only
		T		&operator[](unsigned int index);        // modifiable
		
		unsigned int	size(void) const;	// const here to guarantees that function does not modify the current instance (*this)
};

# include "Array.tpp"

#endif
