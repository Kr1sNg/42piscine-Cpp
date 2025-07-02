/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:17:31 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/02 11:57:13 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string	_type;
		
	public:
		Weapon(const std::string &weapon);
		~Weapon(void);
	
		std::string const	&getType(void) const;
		void				setType(const std::string &newType);

};

#endif
