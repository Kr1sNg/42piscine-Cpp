/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 14:04:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/07 19:36:04 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIAL_SOURCE_HPP_
# define _MATERIAL_SOURCE_HPP_

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{	
	private:
		AMateria	*_srcs[4];

	public:
		MateriaSource(void);
		~MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource	&operator=(MateriaSource const &rhs);
		
		void 		learnMateria(AMateria *mat); //copy mat and store in _srcs
		AMateria	*createMateria(std::string const &type); // return materia named type which is learned before
		
};

#endif