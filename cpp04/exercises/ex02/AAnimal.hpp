/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 18:39:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:44:32 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AANIMAL_HPP_
# define _AANIMAL_HPP_

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
		
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal	&operator=(AAnimal const &rhs);
		virtual	~AAnimal();

		std::string		getType(void) const;
		
		virtual void	makeSound(void) const = 0; // pure virtual method
};

#endif