/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:43:59 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/31 23:10:45 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCALAR_
# define _SCALAR_

# include <iostream>
# include <iomanip>
# include <climits>
# include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter	&operator=(ScalarConverter const &rhs);
	
	public:
		static void	convert(std::string const &s);
};



#endif