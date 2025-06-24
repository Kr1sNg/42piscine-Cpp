/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:18:56 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 16:13:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		weapon;
		
	public:
		HumanB(std::tring const &n, Weapon type);
		~HumanB(void);
		
		void	attack(void);
};

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}



#endif
