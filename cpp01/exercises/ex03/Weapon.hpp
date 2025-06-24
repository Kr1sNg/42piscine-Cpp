/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:17:31 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/24 11:50:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(std::string const &weapon);
	~Weapon();
	
	std::string const &getType(void) const;
	void	setType(std::string const &newType);
};
