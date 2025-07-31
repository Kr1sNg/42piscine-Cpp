/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:00:58 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 17:58:51 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	
}

Serializer::~Serializer()
{
	
}

Serializer::Serializer(Serializer const &src)
{
	(void)src;
}

Serializer	&Serializer::operator=(Serializer const &rhs)
{
	(void)rhs;
	return (*this);
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	n = reinterpret_cast<uintptr_t>(ptr);
	return (n);
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*d = reinterpret_cast<Data *>(raw);
	return (d);
}
