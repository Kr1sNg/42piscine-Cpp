/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 22:29:22 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 23:37:24 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FUNC_
# define _FUNC_

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <typeinfo>	// std::bad_cast
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif