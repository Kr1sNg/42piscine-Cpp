/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_member_attributes_and_member_functions.h        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:54:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 22:49:51 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS
# define SAMPLE_CLASS

class Sample
{
	public:
		int	foo;  // member attributes
		
		Sample(void);
		~Sample(void);
		
		void	bar(void); // member function
};

#endif