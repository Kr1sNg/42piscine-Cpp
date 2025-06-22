/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_pointers_to_members.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:17:25 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 21:49:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POINTER_H_
# define _POINTER_H_

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
	std::cout << "Constructer called" << std::endl;
	
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;

	return ;
}



#endif