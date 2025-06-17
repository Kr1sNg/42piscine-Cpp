/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_classes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:07:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 19:16:53 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

class Rectangle {
	int	width, height;
	public:
		void set_values(int, int);
		int	area() {
			return width*height;
		}
} rect;

void Rectangle::set_values (int x, int y) {
	width = x;
	height = y;
}

int	main () {
	rect.set_values (3, 4);
	cout << "area: " << rect.area() << endl;
	return 0;
}