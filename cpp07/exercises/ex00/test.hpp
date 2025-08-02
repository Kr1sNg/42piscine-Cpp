/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 00:28:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/02 11:27:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _TEST_
# define _TEST_

# include <iostream>

class Test
{
	public:
		Test(void);
		Test(int n);
		~Test();
		Test(Test const &src);
		Test	&operator=(Test const &rhs);

		bool	operator==(Test const &rhs) const;
		bool	operator!=(Test const &rhs) const;
		bool	operator>(Test const &rhs) const;
		bool	operator<(Test const &rhs) const;
		bool	operator>=(Test const &rhs) const;
		bool	operator<=(Test const &rhs) const;

		int	get_n(void) const;
	
	private:
		int	_n;
		
};

std::ostream	&operator<<(std::ostream &o, Test const &a);

#endif