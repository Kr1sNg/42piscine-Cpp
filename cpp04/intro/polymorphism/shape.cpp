/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:00:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/03 12:26:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Shape
{
	public:
		Shape(void)
		{
			std::cout << "Shape constructor called" << std::endl;
		}
		virtual ~Shape()
		{
			std::cout << "Shape destructor called" << std::endl;
		}

		virtual void	draw()
		{
			std::cout << "Drawing a Shape" << std::endl;
		}
		
};

class Circle: public Shape
{
	public:
		Circle(void)
		{
			std::cout << "Circle constructor called" << std::endl;
		}
		~Circle()
		{
			std::cout << "Circle destructor called" << std::endl;
		}
	
		void	draw()
		{
			std::cout << "Drawing a Circle" << std::endl;
		}
		
};

class Square: public Shape
{
	public:
		Square(void)
		{
			std::cout << "Square constructor called" << std::endl;
		}
		~Square()
		{
			std::cout << "Square destructor called" << std::endl;
		}
	
		void	draw()
		{
			std::cout << "Drawing a Square" << std::endl;
		}
		
};

int	main(void)
{
	Shape	*shape1 = new Circle();
	Shape	*shape2 = new Square();
	
	shape1->draw();
	shape2->draw();
	
	delete shape1;
	delete shape2;
	
	return (0);
}