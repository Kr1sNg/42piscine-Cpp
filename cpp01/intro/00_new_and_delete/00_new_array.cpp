/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_new_array.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:07:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 17:22:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(void): _login("logdefault") // can't put any parameter in this constructor as we will allocate memory after
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student(void)
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
		
};

int	main(void)
{
	Student	*students = new Student[42]; // can't pass parameters here as new[] (Array operator) doesn't take parameters
	
	delete [] students;
}