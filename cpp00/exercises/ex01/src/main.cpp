/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 01:04:01 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 09:15:28 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.class.hpp"
#include "../includes/PhoneBook.class.hpp"

string	stoupper(string s);

int	main(void)
{
	string		cmd;
	PhoneBook	phonebook;
	
	while (1)
	{
		cout << "Choose one command: ADD, SEARCH or EXIT ❇️" << endl;
		cout << " 👉 Enter the command: ";
		getline(cin, cmd);
		if (stoupper(cmd) == "ADD")
		{
			Contact	contact;
			while (!contact.init())
			{
				cout << " ⛔ Field can't be empty!" << endl;
				cout << "    Please try again! 🔫" << endl;
			}
			phonebook.add(contact);
			cout << endl;
		}
		else if (stoupper(cmd) == "SEARCH")
		{
			phonebook.search();
			cout << endl;
		}
		else if (stoupper(cmd) == "EXIT")
		{
			cout << "\t     🫰 Goodbye!" << endl;
			cout << "\t 😍 Have a nice day! 😍 " << endl;
			break ;
		}
	}
	return (0);
}
