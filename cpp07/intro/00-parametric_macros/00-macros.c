/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-macros.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:55:28 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 21:20:40 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max_int(int	x, int y)		{ return ((x >= y) ? x : y); }
float	max_float(float x, float y)	{ return ((x >= y) ? x : y); }
char	max_char(char x, char y)	{ return ((x >= y) ? x : y); }

int	foo(int x) { printf("Long computing time\n"); return x; }

#define	max(x, y)	(((x)>=(y)) ? (x) : (y))	// preprocessor

int	main(void)
{
	int	a = 21;
	int	b = 42;
	
	printf("Max of %i and %i is %i\n", a, b, max_int(a, b));
	printf("Max of %i and %i is %i\n", a, b, max(a, b));
	
	float	c = -2.1f;
	float	d = 4.2f;
	
	printf("Max of %f and %f is %f\n", c, d, max_float(c, d));
	printf("Max of %f and %f is %f\n", c, d, max(c, d));
	
	//but it takes time here ...
	printf("Max of %i and %i is %i\n", a, b, max_int(foo(a), foo(b)));
	printf("Max of %i and %i is %i\n", a, b, max(foo(a), foo(b)));

	return (0);
}