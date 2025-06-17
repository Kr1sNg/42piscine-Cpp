/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_const.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:15:19 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 23:37:26 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class	Sample
{
	public:
	
		float const	pi;
		int			qd;
		
		Sample(float const f);
		~Sample(void);
		
		void	bar(void) const; // read-only method => can't modify data member
};


#endif