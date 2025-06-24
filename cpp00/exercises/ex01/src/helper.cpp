/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 00:09:08 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 17:08:00 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	formatField(const std::string& field)
{
	if (field.size() > 10)
		return (field.substr(0, 9) + ".");
	else
		return (std::string(10 - field.size(), ' ') + field);
}

std::string	stoupper(std::string s)
{
	unsigned int	i = -1;
	
	while (++i < s.size())
		s[i] = toupper(s[i]);
	return (s);	
}
