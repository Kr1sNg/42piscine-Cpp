/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_comparisons.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:16:36 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 21:35:03 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

class Sample {
	
	public:
		Sample(int v);
		~Sample(void);

		int	getFoo(void) const;
		int	compare(Sample *other) const;

	private:
		int	_foo;
		
};

#endif