/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:08:20 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:44:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

# include <string>
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain	*_brain;
	
	public:
		Cat(void);
		Cat(Cat const &src);
		Cat	&operator=(Cat const &rhs);
		~Cat();
	
		void	makeSound(void) const;
};

#endif