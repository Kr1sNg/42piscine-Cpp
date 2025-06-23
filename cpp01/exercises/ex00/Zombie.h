/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:27:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 21:38:07 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_H_
# define _ZOMBIE_H_

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
