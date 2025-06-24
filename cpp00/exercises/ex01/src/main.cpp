/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 01:04:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:09:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"
#include "../includes/PhoneBook.class.hpp"

std::string	stoupper(std::string s);

int	main(void)
{
	std::string		cmd;
	PhoneBook	phonebook;
	
	while (1)
	{
		std::cout << "Choose one command: ADD, SEARCH or EXIT ❇️" << std::endl;
		std::cout << " 👉 Enter the command: ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << "EOF detected. Exiting..." << std::endl;
			break;
		}
		if (stoupper(cmd) == "ADD")
		{
			if (!phonebook.add())
				exit(1);
			std::cout << std::endl;
		}
		else if (stoupper(cmd) == "SEARCH")
		{
			phonebook.search();
			std::cout << std::endl;
		}
		else if (stoupper(cmd) == "EXIT")
		{
			std::cout << "\t     🫰 Goodbye!" << std::endl;
			std::cout << "\t 😍 Have a nice day! 😍 " << std::endl;
			break ;
		}
		else
			std::cout << "Try again." << std::endl;
	}
	return (0);
}
