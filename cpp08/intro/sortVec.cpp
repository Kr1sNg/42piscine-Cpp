/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortVec.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:16:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/05 11:21:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <functional>

template <typename T, template Compare = less<T> >
class SortVec: public vector<T>
{
	public:
		SortVec(void)	{};
		SortVec(int n, const T &x = T());

		void insert(const T & obj);
		int	search(const T & obj);
		void	merge(const SortVec<T> &v);
		
};

::(/* args */)
{
}

::~()
{
}
