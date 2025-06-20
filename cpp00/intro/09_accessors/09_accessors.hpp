/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_accessors.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:16:18 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 21:18:23 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample {
	
	public:
	
		Sample(void);
		~Sample(void);

		int	getFoo(void) const;
		void	setFoo(int v);
	
	private:
	
		int	_foo;
		
};

#endif