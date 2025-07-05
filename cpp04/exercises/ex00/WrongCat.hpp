/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:20:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 11:41:57 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_HPP_
# define _WRONG_CAT_HPP_

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat	&operator=(WrongCat const &rhs);

		void	makeSound(void) const;
		
};

#endif