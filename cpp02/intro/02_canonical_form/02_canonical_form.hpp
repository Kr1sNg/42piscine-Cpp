/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_canonical_form.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 21:47:09 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/28 20:51:22 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

#include <iostream>

class	Sample
{
	public:
		Sample(void); 							//Canonical
		Sample(int const n);
		Sample(Sample const &src); 				//Canonical
		~Sample(void); 							//Canonical

		Sample &operator=(Sample const &rhs); 	//Canonical

		int	getFoo(void) const;
		
	private:
		int	_foo;
		
};

std::ostream	&operator<<(std::ostream &o, Sample const &i);


#endif
