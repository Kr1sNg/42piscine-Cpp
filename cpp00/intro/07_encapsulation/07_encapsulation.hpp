/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_encapsulation.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/18 11:00:46 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample
{
	public:
	
		int	publicFoo;
		
		Sample(void); //not in private
		~Sample(void); //not in private
		
		void	publicBar(void) const;
	
	private:
	
		int	_privateFoo; // _private
		
		void	_privateBar(void) const;
	
};


#endif