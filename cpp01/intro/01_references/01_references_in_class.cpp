/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_references_in_class.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:18:31 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 19:35:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
	std::string	_login;
	
public:
	Student(std::string const &login): _login(login)
	{
		return ;
	}
	~Student(void)
	{
		return ;
	};
	
	std::string	&getLoginRef()
	{
		return (this->_login);
	}
	
	std::string const	&getLoginRefConst() const
	{
		return (this->_login);
	}
	
	std::string	*getLoginPtr()
	{
		return (&(this->_login));
	}
	
	std::string	const	*getLoginPtrConst() const
	{
		return (&(this->_login));
	}
};

int	main(void)
{
	Student			bob = Student("bobfubar");
	Student const	jim = Student("jimfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobNEWfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobNEW2fubar";
	std::cout << bob.getLoginRefConst() << std::endl;
}


