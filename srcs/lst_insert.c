/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:58:22 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 18:08:48 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"
#include <string.h>


int			lst_push(t_list *begin, const void *data, const size_t data_size)
{
	return (lst_pushl(begin, lst_create(data, data_size)));
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
	return (lst_apndl(ptr, lst_create(data, data_size)));
}