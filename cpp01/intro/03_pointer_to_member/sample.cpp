/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 09:46:14 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 10:59:17 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Sample
{
	
	public:
		int	foo;
		
		Sample(void);
		~Sample(void);
		
		void	bar(void) const;
};

Sample::Sample(void): foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample()
{
	std::cout << "Desconstructor called" << std::endl;	
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}

int	main(void)
{
	Sample	instance;
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;
	
	p = &Sample::foo;
	
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21; // update foo by instance
	std::cout << "value of foo: " << instance.foo << std::endl;
	instancep->*p = 42; // update foo by pointer of instance
	std::cout << "Value of foo: " << instance.foo << std:: endl;

	f = &Sample::bar;

	(instance.*f)(); // using member function with instance directly
	(instancep->*f)(); // using throught pointer of instance

	return 0;
	

	
}
