/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:09:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 09:08:19 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using namespace std;

string	formatField(const string& field)
{
	if (field.size() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (string(10 - field.size(), ' ') + field);
}

string	stoupper(string s)
{
	int	i = -1;
	
	while (++i < s.size())
		s[i] = toupper(s[i]);
	return (s);	
}
