/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:18:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 19:08:08 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

// bcs we aren't sure that B have a weapon or not, so we can't use reference!
// as reference is used only for exist variable, can't be NULL
// and bcz weapon will change after, so we have to use pointer to follow THIS weapon
// (not only a copy of it)

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
		
	public:
		HumanB(std::string const &n);
		~HumanB(void);
		
		void	attack(void);
		void	setWeapon(Weapon &wp);
};

#endif
