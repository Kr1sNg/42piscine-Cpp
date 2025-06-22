/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_non_member_attributes_and_non_member_fun        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:17:05 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/21 21:38:29 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SAMPLE_H
# define SAMPLE_H

class	Sample
{
	public:
		Sample(void);
		~Sample(void);

		static int	getNbInst(void); //non-member function of class
	
	private:
		static int	_nbInst; //non-member attribute of class (not object)
};

#endif