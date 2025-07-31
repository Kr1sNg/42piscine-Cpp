/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:00:40 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 22:29:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZER_
# define _SERIALIZER_

# include "Data.hpp"

class	Serializer
{
	private:
		Serializer(void);
		~Serializer();
		Serializer(Serializer const &src);
		Serializer	&operator=(Serializer const &rhs);
	
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
		
};

# endif