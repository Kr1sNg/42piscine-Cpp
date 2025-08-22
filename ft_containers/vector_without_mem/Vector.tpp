/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:45:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/07 11:41:41 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Vector.hpp"

template <typename T>
void	Vector<T>::resize_capacity(size_t new_capa)
{
	T	*new_data = new T[new_capa]();
	for (size_t i = 0; i < _size; ++i)
		new_data[i] = _data[i];
	delete [] _data;
	_data = new_data;
	_capacity = new_capa;
}

template <typename T>
Vector<T>::Vector(void): _data(NULL), _size(0), _capacity(0)
{
}

template <typename T>
Vector<T>::Vector(size_t n, T const &val): _size(n), _capacity(n)
{
	_data = new T[n]();
	for (size_t i = 0; i < n; ++i)
		_data[i] = val;
}

template <typename T>
Vector<T>::Vector(Vector const &src): _data(NULL), _size(src._size), _capacity(src._capacity)
{
	if (_size > 0)
	{
		_data = new T[_size]();
		for (size_t i = 0; i < _size; ++i)
			_data[i] = src._data[i];
	}
}

template <typename T>
Vector<T>	&Vector<T>::operator=(Vector const &rhs)
{
	if (this != &rhs)
	{
		delete [] _data;
		_size = rhs._size;
		_capacity = rhs._capacity;
		_data = (_size > 0) ? new T[_size]() : NULL;
		for (size_t i = 0; i < _size; ++i)
			_data[i] = rhs._data[i];
	}
	return (*this);
}

template <typename T>
Vector<T>::~Vector()
{
	delete [] _data;
}

// operator[] does not check out of bounds
template <typename T>
T	&Vector<T>::operator[](size_t index)
{
	return (_data[index]);
}

template <typename T>
T const	&Vector<T>::operator[](size_t index) const
{
	return (_data[index]);
}

template <typename T>
T	&Vector<T>::at(size_t index)
{
	if (index >= _size)
		throw (std::out_of_range("Out of range"));
	return (_data[index]);
}

template <typename T>
T const	&Vector<T>::at(size_t index) const
{
	if (index >= _size)
		throw (std::out_of_range("Out of range"));
	return (_data[index]);
}

template <typename T>
T	&Vector<T>::front(void)
{
	return (_data[0]);
}

template <typename T>
T const	&Vector<T>::front(void) const
{
	return (_data[0]);
}

template <typename T>
T	&Vector<T>::back(void)
{
	return (_data[_size - 1]);
}

template <typename T>
T const &Vector<T>::back(void) const
{
	return (_data[_size - 1]);
}

template <typename T>
size_t	Vector<T>::size(void) const
{
	return (_size);
}

template <typename T>
size_t	Vector<T>::capacity(void) const
{
	return (_capacity);
}

template <typename T>
bool	Vector<T>::empty(void) const
{
	return (_size == 0);
}

template <typename T>
void	Vector<T>::push_back(T const &val)
{
	if (_size == _capacity)
		resize_capacity(_capacity == 0 ? 1 : _capacity * 2);
	_data[_size++] = val;
}

// like clear(), pop_back() only reduces the size, does not delete element 
template <typename T>
void	Vector<T>::pop_back(void)
{
	if (_size > 0)
		--_size;
}

// same as std::vector, clear() doesn't delete memory, it just set _size = 0.
template <typename T>
void	Vector<T>::clear(void)
{
	_size = 0;
}

template <typename T>
void	Vector<T>::reserve(size_t n)
{
	if (n > _capacity)
		resize_capacity(n);
}

template <typename T>
void	Vector<T>::resize(size_t n, T const &val)
{
	if (n < _size)
		_size = n;
	else
	{
		if (n > _capacity)
			resize_capacity(n);
		for (size_t i = _size; i < n; ++i)
			_data[i] = val;
		_size = n;
	}
}

// using typename here for indicating that a dependent name is a type
// helps the compiler knows for sure that Vector<T>::iterator is a type !!
template <typename T>
typename Vector<T>::iterator	Vector<T>::begin(void)
{
	return (iterator(_data));
}

template <typename T>
typename Vector<T>::iterator	Vector<T>::end(void)
{
	return (iterator(_data + _size));
}
