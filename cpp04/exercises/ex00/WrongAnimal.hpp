/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:21:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 11:41:48 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_ANIMAL_HPP_
# define _WRONG_ANIMAL_HPP_

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
		
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		
		std::string	getType(void) const;
		void		makeSound(void) const;

};

#endif