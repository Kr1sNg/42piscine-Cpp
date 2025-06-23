/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 21:57:49 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/23 22:24:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEZ_HPP_
# define _ZOMBIEZ_HPP_

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie( std::string s );
		~Zombie( void );
		
		void	setName( std::string n);
		void	announce( void );
		
		Zombie( void );
};


#endif