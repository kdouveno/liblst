/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karldouvenot <karldouvenot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:20:56 by kdouveno          #+#    #+#             */
/*   Updated: 2020/05/05 19:59:17 by karldouveno      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"
#include <string.h>
#include <stdio.h>
size_t	lst_size(t_list l)
{
	int i;

	i = 0;
	while (l)
	{
		l = LSTN(l);
		i++;
	}
	return (i);
}

t_list	lst_create(const void *data, const size_t data_size)
{
	t_list	out;

	if (!(out = malloc(sizeof(t_list) + data_size)))
		return (NULL);
	memcpy(LSTA(out), data, data_size);
	LSTN(out) = NULL;
	return (out);
}

int		lst_rev(t_list *lst)
{
	t_list new;
	t_list next;
	t_list tmp;

	if (!lst || !*lst)
		return 1;
	new = NULL;
	tmp = *lst;
	while (tmp)
	{
		next = LSTN(tmp);
		lst_pushl(&new, tmp);
		tmp = next;
	}
	*lst = new;
	return (0);
}