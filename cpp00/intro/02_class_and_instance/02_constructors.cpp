/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_constructors.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:07:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 19:33:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Rectangle
{
	int	width, height;
	
	public:
		Rectangle(int, int); // CONSTRUCTOR - automatically called whenever a new object of this class is created
							// allowing the class to initialize member variables or allocate storage!
							// is declared just like a regular member function, with the name that matches the class name and without any return type, not even void!
		int		area() 
		{
			return width*height;
		}
};

Rectangle::Rectangle(int x, int y)
{
	width = x;
	height = y;
}

int	main()
{
	Rectangle rect(3, 4);
	cout << "rect area: " << rect.area() << endl;
	Rectangle rectb(5, 6);
	cout << "rectb area: " << rectb.area() << endl;

	return (0);
}
