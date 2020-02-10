/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:58:22 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 16:19:46 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"
#include <string.h>


int			lst_push(t_list *begin, const void *data, const size_t data_size)
{
	t_list	out;

	if (!(out = malloc(sizeof(t_list) + data_size)))
		return (1);
	memcpy(LSTA(out), data, data_size);
	LSTN(out) = *begin;
	*begin = out;
	return (0);
}

int			lst_set(t_list ptr, const void *data, const size_t data_size)
{
	memcpy(LSTA(ptr), data, data_size);
	return (0);
}

int			lst_setn(t_list ptr, size_t n, const void *data, const size_t data_size)
{
	return (lst_set(lst_getn(ptr, n), data, data_size));
}

int			lst_apnd(t_list *ptr, const void *data, const size_t data_size)
{
	t_list	out;
	t_list	begin;

	if (!*ptr)
		lst_push(ptr, data, data_size);
	if (!(out = malloc(sizeof(t_list) + data_size)))
		return (1);
	LSTN(out) = NULL;
	memcpy(LSTA(out), data, data_size);
	begin = *ptr;
	while (LSTN(begin) != NULL)
		begin = LSTN(begin);
	LSTN(begin) = out;
	return (0);
}