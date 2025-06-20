/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_class_vs_struct.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:16:02 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/19 20:37:38 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SAMPLE_HPP
# define SAMPLE_HPP

struct	Sample1
{
	int	foo;

	Sample1(void);
	~Sample1(void);
	
	void	bar(void) const;
};

class Sample2
{
	public:
		int	foo;
	
		Sample2(void);
		~Sample2();

		void	bar(void) const;
};

#endif