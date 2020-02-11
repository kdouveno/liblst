/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_insertl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:58:22 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/11 14:55:21 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"
#include <string.h>


int			lst_pushl(t_list *begin, t_list l)
{
	LSTN(l) = *begin;
	*begin = l;
	return (0);
}


int			lst_apndl(t_list *ptr, t_list l)
{
	t_list	begin;

	if (!*ptr)
		lst_pushl(ptr, l);
	begin = *ptr;
	while (LSTN(begin) != NULL)
		begin = LSTN(begin);
	LSTN(begin) = l;
	return (0);
}