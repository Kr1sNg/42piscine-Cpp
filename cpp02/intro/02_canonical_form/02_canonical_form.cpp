/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_canonical_form.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:39:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 21:08:25 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "02_canonical_form.hpp"

Sample::Sample(void): _foo(0)
{
	std::cout << "Default Constructor called" << std::endl;
	return ;
}
Sample::Sample(int const n): _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return ;
}

Sample::Sample(Sample const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Sample &Sample::operator=(Sample const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();
	
	return (*this);
}

int	Sample::getFoo(void) const
{
	return (this->_foo);
}

std::ostream	&operator<<(std::ostream &o, Sample const &i)
{
	o << "The value of _foo is: " << i.getFoo();

	return (o);
}

int main(void)
{
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3(instance1);
	
	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;
	
	return (0);
}

