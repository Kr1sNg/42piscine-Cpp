/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:02:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 22:48:27 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int	main(void)
{
	Base *base = generate();
	
	std::cout << ">>--- Test pointer ---<< " << std::endl;
	identify(base);

	std::cout << ">>--- Test reference ---<< " << std::endl;
	identify(*base);
	
	delete base;
	return (0);
}