/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explicit_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:31:54 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/07/24 11:16:01 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	double	a;
	double	c;
	int		b;
	unsigned long d;
	unsigned int e;
	
	printf("Insert a double value: ");
	scanf("%lf", &a);
	c = a;
	printf("double c = a: %lf\n", c);
	b = (int)a; // explicit conversion => highly recommend => flag -Wconversion
	printf("demotion: int b = (int)a: %d\n", b);
	c = b; // implicit conversion => can use when casting a type into a bigger
	printf("promotion: c = (double)b : %lf\n", c);
	d = (unsigned long)a;
	printf("demotion (unsigned long)a : %lu\n", d);
	e = (unsigned int)a;
	printf("demotion (unsigned int)a: %u\n", e);
	return (0);
}