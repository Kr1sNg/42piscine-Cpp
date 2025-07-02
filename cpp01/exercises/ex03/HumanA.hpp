/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:18:29 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 12:01:34 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

// we can use pointer for HumanA in the same way with HumanB, but can't do reverse
// but reference is always preferred (bcs the weapon of A is always existed and never change)

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon; //reference
		
	public:
		HumanA(const std::string &n, Weapon &type);
		~HumanA(void);

		void	attack(void);
};



#endif