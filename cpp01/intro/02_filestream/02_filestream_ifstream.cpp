/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_filestream_ifstream.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:45:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 20:04:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{
	std::ifstream	ifs("numbers"); // create file description to read numbers
	unsigned int	a;
	unsigned int	b;

	ifs >> a >> b;
	std::cout << a << " " << b << std::endl;
	ifs.close(); // close file description
	
}