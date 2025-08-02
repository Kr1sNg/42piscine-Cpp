/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:28:52 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 17:57:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -> file .tpp actually is a part of .hpp, so we don't need any #include_guard macro

# include <stdexcept>

template <typename T>
Array<T>::Array(void): _arr(NULL), _size(0)
{
	
}

template <typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]()), _size(n)
{
	
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
}

// modifying either the original array or its copy after copying musn’t affect the other array
// => use the deep copy
template <typename T>
Array<T>::Array(Array const &src): _arr(NULL), _size(src._size)
{
	if (_size > 0)
	{
		_arr = new T[_size]();
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = src._arr[i];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		delete[] _arr;
		_size = rhs._size;
		_arr = (_size > 0) ? (new T[_size]()) : NULL;
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = rhs._arr[i];
	}
	return (*this);
}

template <typename T>
T const	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw (std::out_of_range("Array index out of bounds"));
	return (_arr[index]);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw (std::out_of_range("Array index out of bounds"));
	return (_arr[index]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}
