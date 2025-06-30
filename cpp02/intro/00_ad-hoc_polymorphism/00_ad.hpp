/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:08:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/26 20:30:02 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:
		Sample(void);
		~Sample(void);

		void	bar(char const c) const;
		void	bar(int const n) const;
		void	bar(float const z) const;
		void	bar(Sample const &i) const;
		
};

#endif
