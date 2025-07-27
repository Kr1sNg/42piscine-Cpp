/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02-explicit_qualifier_reinterpretation.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:20:23 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/26 19:33:09 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a = 42;							// reference value
	printf("a: %p, %i\n", &a, a);

	int const*	b = &a;					// Implicit type qualifier cast
	printf("b: %p, %i\n", b, *b);
	
	int const*	c = (int const *)&a;	// Explicit type qualifier cast
	printf("c: %p, %i\n", c, *c);

	
	int const*	d = &a;					// Implicit promotion -> OK
	printf("d: %p, %d\n", d, *d);

	// int	*e = d;						// Implicit demotion -> Can't go from const address to non-const one by implicit
	// printf("e: %p, %d\n", e, *e);

	int	*f = (int *)d;					// Explicit demotion -> Recommend!
	printf("f: %p, %d\n", f, *f);
	
	return (0);
}