/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VectorIterator.tpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:22:43 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/07 11:02:55 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VectorIterator.hpp"

template <typename T>
VectorIterator<T>::VectorIterator(void)
{	
}

template <typename T>
VectorIterator<T>::VectorIterator(T *p): _ptr(p)
{
}

template <typename T>
VectorIterator<T>::VectorIterator(VectorIterator const &src): _ptr(src._ptr)
{
}

template <typename T>
VectorIterator<T>	&VectorIterator<T>::operator=(VectorIterator const &rhs)
{
	if (this != &rhs)
	{
		_ptr = rhs._ptr;
	}
	return (*this);
}

template <typename T>
VectorIterator<T>::~VectorIterator()
{
}

template <typename T>
T	&VectorIterator<T>::operator*(void) const
{
	return (*_ptr);
}

template <typename T>
T	*VectorIterator<T>::operator->(void) const
{
	return (_ptr);
}

template <typename T>
VectorIterator<T>	&VectorIterator<T>::operator++(void)
{
	++_ptr;
	return (*this);
}

template <typename T>
VectorIterator<T>	VectorIterator<T>::operator++(int)
{
	VectorIterator	tmp = *this;
	++_ptr;
	return (tmp);
}

template <typename T>
VectorIterator<T>	&VectorIterator<T>::operator--(void)
{
	--_ptr;
	return (*this);
}

template <typename T>
VectorIterator<T>	VectorIterator<T>::operator--(int)
{
	VectorIterator	tmp = *this;
	--_ptr;
	return (tmp);
}

template <typename T>
VectorIterator<T>	VectorIterator<T>::operator+(ptrdiff_t n) const
{
	return (VectorIterator(_ptr + n));
}

template <typename T>
VectorIterator<T>	VectorIterator<T>::operator-(ptrdiff_t n) const
{
	return (VectorIterator(_ptr - n));
}

template <typename T>
ptrdiff_t		VectorIterator<T>::operator-(VectorIterator const &rhs) const
{
	return (_ptr - rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator==(VectorIterator const &rhs) const
{
	return (_ptr == rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator!=(VectorIterator const &rhs) const
{
	return (_ptr != rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator>(VectorIterator const &rhs) const
{
	return (_ptr > rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator>=(VectorIterator const &rhs) const
{
	return (_ptr >= rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator<(VectorIterator const &rhs) const
{
	return (_ptr == rhs._ptr);
}

template <typename T>
bool	VectorIterator<T>::operator<=(VectorIterator const &rhs) const
{
	return (_ptr == rhs._ptr);
}
