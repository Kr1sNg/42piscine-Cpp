/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:34:41 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 12:47:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEV_
# define _WEV_

template <typename Type>
void	swap(Type &a, Type &b)
{
	Type temp = a;
	a = b;
	b = temp;
}

template <typename Type>
Type	min(Type const &a, Type const &b)
{
	return ((a < b) ? a : b);
}

template <typename Type>
Type	max(Type const &a, Type const &b)
{
	return ((a > b) ? a : b);
}

#endif
