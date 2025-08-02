/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 09:48:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 11:51:14 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEST_
# define _TEST_

# include <iostream>

class	Test
{
	private:
		int	_n;
	
	public:
		Test(void);
		Test(int n);
		~Test();
		Test(Test const &src);
		Test	&operator=(Test const &rhs);

		Test	operator+(Test const &rhs);

		int	get(void) const;

};

std::ostream	&operator<<(std::ostream &o, Test const &rhs);

#endif