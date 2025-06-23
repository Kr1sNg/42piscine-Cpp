/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_new_and_delete.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:11:33 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 17:00:36 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
	private:
		std::string	_login;
		
	public:
		Student(std::string login): _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int	main()
{
	Student	bob = Student("bobfubar");
	Student *jim = new Student("jim_login"); //allocate dynamic memory to object jim

	delete jim; // deallocate memory of jim
	
	return (0);
}
