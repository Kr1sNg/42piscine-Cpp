/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:12:15 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 14:08:56 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HARL_TWO_HPP_
# define _HARL_TWO_HPP_

# include <string>
# include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		
	public:
		Harl(std::string level);
		~Harl(void);

		void	complain(std::string level);
	
};


#endif