/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:12:11 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/04 10:46:31 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# define FRAG_HITPOINT 100
# define FRAG_ATTKDAMG 30

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const &src);
		FragTrap	&operator=(FragTrap const &rhs);
		~FragTrap(void);

		void	attack(const std::string &target);
		
		void	highFivesGuys(void);
		
		int		getDefaultHP(void);
		int		getDefaultAD(void);
		
};

#endif