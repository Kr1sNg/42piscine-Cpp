/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:51:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/21 16:31:10 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_
# define _INTERN_

# include <string>
# include "AForm.hpp"

class Intern
{
	private:	
		Intern(Intern const &src);
		Intern	&operator=(Intern const &rhs);
	
	public:
		Intern(void);
		~Intern();
		AForm	*makeForm(std::string const &FormName, std::string const &target);
};


#endif