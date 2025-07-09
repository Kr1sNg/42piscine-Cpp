/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:27:16 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 09:31:54 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria(std::string const &type);
		
		AMateria(void);
		virtual ~AMateria();
		AMateria(AMateria const &src);
		AMateria	&operator=(AMateria const &rhs);

		std::string const	&getType(void) const;
		
		virtual	AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
		
};

#endif