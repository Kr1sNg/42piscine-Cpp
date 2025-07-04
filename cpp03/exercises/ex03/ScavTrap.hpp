/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:15:50 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 10:48:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

# define SCAV_ENGPNT 50

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(ScavTrap const &src);
		ScavTrap	&operator=(ScavTrap const &rhs);
		~ScavTrap(void);

		void	attack(const std::string &target);
		
		void	guardGate(void);

		int		getDefaultEP(void);
		
};

#endif