/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08-cast_operators.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:31:04 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/29 21:21:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Foo
{
	private:
		float	_v;
		
	public:
		Foo(float const v): _v(v)
		{
		}
		
		float	getV(void)
		{
			return this->_v;
		}
		
		// cast operators:
		operator float()
		{
			return this->_v;
		}

		operator int()
		{
			return (static_cast<int>(this->_v));
		}
};

int	main(void)
{
	Foo	a(42.042f);
	float	b = a;
	int		c = a;

	std::cout << "a: " << a.getV() << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	return (0);
}