/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_find_replace.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:51:45 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/25 12:09:39 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	s1("There they go again!"),
				s2("Bob and Bill");
	int			pos = s1.find("they");
	
	std::cout << "before: " << s1 << std::endl;
	
	if (pos != std::string::npos) // npos = no position
		s1.replace(pos, 4, s2); // position, length of substr, new substring

	std::cout << "after: " << s1 << std::endl;
	
	return (0);
}