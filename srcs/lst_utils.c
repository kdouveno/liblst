/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:20:56 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 18:00:41 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

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
		return (1);
	memcpy(LSTA(out), data, data_size);
	LSTN(out) = NULL;
	return (out);
}