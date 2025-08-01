/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 21:21:39 by tat-nguy          #+#    #+#             */
/*   Updated: 2025/08/01 21:47:35 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct	int_list_s
{ 
	int 				n;
	struct int_list_s * next;
}	int_list_t;

typedef struct float_list_s
{
	float					z;
	struct float_list_s * 	next;
}	float_list_t;

typedef struct	string_list_s
{
	char *	str;
	struct string_list_s *next;
}	string_list_t;

int_list_t	*int_list_new(int n);
float_list_t	*float_list_new(float n);
string_list_t	*string_list_new(char *str);

void	int_list_delete(int_list_t **list);
void	float_list_delete(float_list_t **list);
void	string_list_delete(string_list_t **list);

//// other method

typedef struct list_s
{
	void 			*content;
	size_t 			size;
	struct list_s 	*next;
}	list_t;

list_t	*list_new(void *content, size_t size);
void	list_delete(list_t **list);


