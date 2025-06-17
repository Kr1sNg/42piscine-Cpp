/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-namespace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:06:47 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/06/17 16:06:48 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;

int	f(void)
{
	return 2;
}

namespace Foo
{
	int	gl_var = 3;
	int	f(void)
	{
		return 4;
	}
}

namespace Bar
{
	int gl_var = 5;
	int f(void)
	{
		return 6;
	}
}

namespace Muf = Bar;

int	main(void)
{
	// (1)
	printf("gl_var:		[%d]\n", gl_var);
	printf("f():		[%d]\n", f());
	printf("\n");
	
	printf("Foo::gl_var:	[%d]\n", Foo::gl_var);
	printf("Foo::f():	[%d]\n", Foo::f());
	printf("\n");

	printf("Bar::gl_var:	[%d]\n", Bar::gl_var);
	printf("Bar::f():	[%d]\n", Bar::f());
	printf("\n");

	printf("Muf::gl_var:	[%d]\n", Muf::gl_var);
	printf("Muf::f():	[%d]\n", Muf::f());
	printf("\n");

	// empty namespace for global variables or function
	// exact the same thing with (1)
	printf("::gl_var:	[%d]\n",::gl_var);
	printf("::f():		[%d]\n",::f());

	return (0);
}

