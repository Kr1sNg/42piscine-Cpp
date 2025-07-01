/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:40:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/01 22:58:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string		_name;
		int				_hit_pnt;
		int				_enrg_pnt;
		int				_attk_dmg;
		
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &);
		ClapTrap	&operator=(ClapTrap const &);
		~ClapTrap(void);

		ClapTrap(std::string const name);
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
};	

#endif