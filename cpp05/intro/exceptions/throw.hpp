/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 22:46:06 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/15 22:53:17 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _THROW_
# define _THROW_

#include <iostream>
#include <string>

class Error
{
	private:
		std::string	message;

		Error(void);
		Error	&operator=(Error const &rhs);
		
	public:
		Error(std::string const &s);
		Error(Error const &src);
		~Error(void);
		
		std::string const &getMessage(void) const;
};


#endif