/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:50:11 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 11:41:44 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

# include <string>
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		~Ice();
		Ice(Ice const &src);
		Ice	&operator=(Ice const &rhs);
		
		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif