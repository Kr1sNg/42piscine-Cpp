/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 13:27:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/09 09:37:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIAL_SOURCE_HPP_
# define _IMATERIAL_SOURCE_HPP_

# include <iostream>
# include <string>

class AMateria;

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		
		virtual void 		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
		
};

#endif