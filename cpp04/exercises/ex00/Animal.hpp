/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 15:07:39 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
		
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal	&operator=(Animal const &rhs);
		virtual	~Animal();

		std::string		getType(void) const;
		
		virtual void	makeSound(void) const;
};

#endif