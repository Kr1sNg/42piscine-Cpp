/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 14:46:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/05 16:43:24 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
		
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);
		Brain	&operator=(Brain const &rhs);

		std::string	getIdea(int index) const;
		void	setIdea(int index, std::string const &idea);
		
};

#endif