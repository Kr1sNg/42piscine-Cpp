/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:28:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 21:40:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// create zombie on the heap (heap allocation)

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie *nZ = new Zombie( name );
	
	return (nZ);
}
