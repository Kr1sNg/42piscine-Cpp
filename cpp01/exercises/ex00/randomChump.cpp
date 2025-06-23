/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:28:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 21:40:39 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// create zombie on the stack (stack allocation)

#include "Zombie.h"

void	randomChump( std::string name )
{
	Zombie chump( name );
	chump.announce();
}
		
