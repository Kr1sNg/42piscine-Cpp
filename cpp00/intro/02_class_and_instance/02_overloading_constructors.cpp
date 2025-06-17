/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_overloading_constructors.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:07:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 19:51:55 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Constructor, not like other functions or members, can also be overloaded with different versions,
//	taking different parameters: with a differnt number of parameters and/or parameters of different types.

#include <iostream>

using namespace std;

class Rectangle
{
	float	width, height;
	
	public:
		Rectangle(); // other version of constructor - DEFAULT constructor, which takes no parameters
		Rectangle(int, int);
		Rectangle(float, float); // other version of constructor
		float		area() 
		{
			return (width*height);
		}
};

Rectangle::Rectangle()
{
	width = 5;
	height = 5;
}

Rectangle::Rectangle(int x, int y)
{
	width = x;
	height = y;
}

Rectangle::Rectangle(float x, float y)
{
	width = x;
	height = y;
}

int	main()
{
	Rectangle rect;
	cout << "rect area: " << rect.area() << "m2" << endl;

	Rectangle recta(5.5f , 9.75f);
	cout << "recta area: " << recta.area() << "m2" << endl;

	Rectangle rectb(5, 6);
	cout << "rectb area: " << rectb.area() << "m2" << endl;

	return (0);
}
