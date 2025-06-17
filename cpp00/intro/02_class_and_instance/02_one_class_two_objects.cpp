/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_one_class_two_objects.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:07:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 19:22:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Rectangle
{
	int	width, height;
	
	public:
		void	set_values(int, int);
		int		area() 
		{
			return width*height;
		}
};

void Rectangle::set_values(int x, int y)
{
	width = x;
	height = y;
}

int	main()
{
	Rectangle	rect, rectb;
	
	rect.set_values(2, 4);
	cout << "rect area: " << rect.area() << endl;
	rectb.set_values (5, 6);
	cout << "rectb area: " << rectb.area() << endl;

	return (0);
}
