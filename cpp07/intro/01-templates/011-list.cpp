/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-list.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:37:21 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 22:51:24 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T >	//have to go with class/ function that decalares for
class List
{
	public:
		List<T>(T const & content): _content(content) {}
		List<T>(List<T> const & list): _content(list) {}
		~List<T>(void) {}

		T const &getContent(void) const
		{
			return _content;
		}
		
	private:
		T		_content;
		List<T>	*_next;

};

int	main(void)
{
	List<int>			a(42);
	List<float>			b(3.14f);
	List<List<int> > 	c(a);
	
	std::cout << "a: " << a.getContent() << std::endl;
	std::cout << "b: " << b.getContent() << std::endl;
	
	return (0);
}

