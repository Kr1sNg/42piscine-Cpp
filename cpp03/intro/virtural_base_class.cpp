/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   virtural_base_class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 10:02:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 10:23:47 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A
{
	public:
		void	show()
		{
			std::cout << "Hello from A" << std::endl;
		}
};

class B : public virtual A
{
	
};

class C : virtual public A
{
	
};

class D : public B, public C
{
	
};

int	main(void)
{
	D	object;

	object.show();
	return (0);
}
