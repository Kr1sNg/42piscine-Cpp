/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl_like.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 10:00:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/29 19:20:06 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	_STL_LIKE_
# define _STL_LIKE_

# include <exception>
# include <iostream>

namespace	ft
{
	template <typename T1, typename T2>
	class pair
	{
	public:
		T1	first;
		T2	second;
		
	private:
		pair(void):	first(void), second(void)	{};
		pair(T1 const &a, T2 const &b): first(a), second(b)	{};
		~pair()	{};
		pair(pair<T1, T2> const &src): first(src.first), second(src.second)	{};
		
		template <typename U, typename V>
		pair(pair<U, V> const &src): first(src.first), second(src.second)	{};
		
		pair	&operator=(pair const &rhs)
		{
			if (this != &rhs)
			{
				first = rhs.first;
				second = rhs.second;
			}
			return (*this);
		}
	};

	
}

#endif