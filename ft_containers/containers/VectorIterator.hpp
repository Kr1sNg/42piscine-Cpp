/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VectorIterator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:22:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/07 11:02:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iterator>
#include <cstddef>	// for type std::size_t, std::ptrdiff_t

//std::ptrdiff_t is the signed integer type of the result of subtracting two pointers.

template <typename T>
class VectorIterator
{
	private:
		T	*_ptr;
	
	public:
		// using iterator_category = std::random_access_iterator_tag;
		
		VectorIterator(void);
		VectorIterator(T *p = NULL);
		VectorIterator(VectorIterator const &src);
		VectorIterator	&operator=(VectorIterator const &rhs);
		~VectorIterator();

		T	&operator*(void) const;
		T	*operator->(void) const;
		
		VectorIterator	&operator++(void);
		VectorIterator	operator++(int);
		VectorIterator	&operator--(void);
		VectorIterator	operator--(int);

		VectorIterator	operator+(ptrdiff_t n) const;
		VectorIterator	operator-(ptrdiff_t n) const;
		ptrdiff_t		operator-(VectorIterator const &rhs) const;
		
		bool	operator==(VectorIterator const &rhs) const;
		bool	operator!=(VectorIterator const &rhs) const;
		bool	operator<(VectorIterator const &rhs) const;
		bool	operator>(VectorIterator const &rhs) const;
		bool	operator<=(VectorIterator const &rhs) const;
		bool	operator>=(VectorIterator const &rhs) const;
		
};

#include "VectorIterator.tpp"