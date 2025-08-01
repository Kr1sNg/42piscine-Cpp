/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02-default_type.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:55:51 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 23:07:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T = float >	//defaut type
class	Vertex
{
	public:
		Vertex(T const &x, T const &y, T const &z): _x(x), _y(y), _z(z) {}
		~Vertex() {}
		
		T const &getX(void) const	{ return this->_x; }
		T const &getY(void) const	{ return this->_y; }
		T const &getZ(void) const	{ return this->_z; }
		
	private:
		T const	_x;
		T const	_y;
		T const	_z;

		Vertex(void);
};

template <typename P>
std::ostream	&operator<<(std::ostream &o, Vertex<P> const &v)
{
	std::cout.precision(1);		// sets the number of digits after the decimal point (when combined with std::fixed).
	o << std::setiosflags(std::ios::fixed);	// is a manipulator that sets the stream to use fixed-point notation.
	o << "Vertex( " << v.getX() << ", " << v.getY() << ", " << v.getZ() << " )";
	return o;
}

int	main(void)
{
	Vertex<int>	v1(12, 23, 34);
	Vertex< >	v2(12, 23, 34);	//using default type

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}