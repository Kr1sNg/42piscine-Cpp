/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 01:04:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/20 02:03:12 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/Contact.class.hpp"
#include "../includes/PhoneBook.class.hpp"

using namespace std;

int	main(void)
{
	std::string	cmd;
	
	while (1)
	{
		cout << "Enter the command: ";
		cin >> cmd;
		if (cmd == "ADD")
			cout << "you inserted ADD" << endl;
		else if (cmd == "SEARCH")
			cout << "seaching" << endl;
		else if (cmd == "EXIT")
		{
			cout << "Bye!" << endl;
			break ;
		}
		else
			cout << "Wrong command" << endl;
	}
	return (0);
}
