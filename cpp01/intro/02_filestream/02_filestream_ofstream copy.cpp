/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_filestream_ofstream.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 19:45:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 20:03:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(void)
{	
	std::ofstream	ofs("test.out"); // create file and file description to write to
	
	ofs << "I like ponies a whole damn lot" << std::endl;
	ofs.close(); //close fd
}