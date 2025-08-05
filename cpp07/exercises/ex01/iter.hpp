/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 09:44:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/04 13:25:48 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_
# define _ITER_

# include <iostream>

template <typename Type>
void	iter(Type const *array, unsigned int size, void (*func)(Type const &))
{
	for (unsigned int i = 0; i < size; ++i)
	{
		func(array[i]);
	}
}

template <typename Type>
void	iter(Type *array, unsigned int size, void (*func)(Type &))
{
	for (unsigned int i = 0; i < size; ++i)
	{
		func(array[i]);
	}
}

#endif
