/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:18:44 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/26 19:02:30 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	a = 420.042f;			// reference value
	printf("a: %p, %f\n", &a, a);

	void	*b = &a;				// Implicit reinterpretation cast
	printf("b: %p\n", b);
	
	void	*c = (void *)&a;		// Explicit reinterpretation cast
	printf("c: %p\n", c);

	
	void	*d = &a;				// Implicit promotion -> OK
	printf("d: %p\n", d);

	int	*e = d;						// Implicit demotion -> Danger!
	printf("e: %p, %d -> bizarre number because we force it to cast from float into int\n", e, *e);

	int	*f = (int *)d;				// Explicit demotion -> Recommend!
	printf("f: %p, %d\n", f, *f);
	
	return (0);
}