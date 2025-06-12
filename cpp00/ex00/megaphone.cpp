/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:37:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/12 09:37:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std; // make names from std visible without std::

int main(int argc, char *argv[])
{
	int		i = 1;
	int 	j;
	int		len;
	char 	c;

	if (argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	while (i < argc)
	{
		len = strlen(argv[i]);
		j = 0;
		while (j < len)
		{
			c = toupper(argv[i][j]);
			cout << c;
			j++;
		}
		i++;
	}
	cout << "\n";
	return (0);
}