/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:17:07 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/07 11:34:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. Vector (Vector.hpp)
- Core structure: Dynamic array with size, capacity, and a raw pointer.
- Required functions:
	- Constructor, destructor, copy, assignment
	- size(), capacity(), push_back(), pop_back(), operator[], at(), begin(), end(),
		insert(), erase(), clear(), empty(), etc.
Bonus: Allocator mechanics, reverse_iterator
*/

#pragma once

#include <memory>		// for std::allocator
#include <cstddef>		// for std::size_t
#include <iterator>		// for std::random_access_iterator_tag
#include <stdexcept>
#include "VectorIterator.hpp"

template <typename T>
class Vector
{
	private:
		T			*_data;
		size_t		_size;
		size_t		_capacity;
		// Allocator	_alloc;

		void	resize_capacity(size_t new_capa);
				
	public:
		// canonical form
		Vector(void);
		Vector(size_t n, T const &val = T());
		Vector(Vector const &src);
		Vector	&operator=(Vector const &rhs);
		~Vector();

		// Element access
		T		&operator[](size_t index);	//modifiable
		T const	&operator[](size_t index) const;	//read-only
		T		&at(size_t index);
		T const	&at(size_t index) const;
		T		&front(void);
		T const	&front(void) const;
		T		&back(void);
		T const	&back(void) const;

		// Capacity
		size_t	size(void) const;
		size_t	capacity(void) const;
		bool	empty(void) const;

		// Modifiers
		void	push_back(T const &val);
		void	pop_back(void);
		void	clear(void);
		void	reserve(size_t n);
		void	resize(size_t n, T const &val = T());

		// Iterators
		typedef VectorIterator<T>       iterator;
		iterator	begin(void);	// first element
		iterator	end(void);		//after the last element
		
};

#include "Vector.tpp"
