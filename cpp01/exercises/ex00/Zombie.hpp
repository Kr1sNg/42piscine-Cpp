/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:27:35 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 21:38:50 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie( std::string s );
		~Zombie( void );

		void	announce( void );

};

#endif
		