/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_convers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karldouvenot <karldouvenot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:19:02 by kdouveno          #+#    #+#             */
/*   Updated: 2020/05/02 20:37:33 by karldouveno      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"
#include <string.h>

t_lsttab	lst_totab(t_list lst, const size_t data_size)
{
	t_lsttab	out;
	void	*tmp;

	out.b_size = lst_size(lst);
	out.e_size = data_size * out.b_size;
	if (!(out.tab = (void*)malloc(out.e_size)))
	{
		out.tab = NULL;
		return (out);
	}
	tmp = out.tab;
	while (lst)
	{
		memcpy(tmp, LSTA(lst), data_size);
		tmp += data_size;
		lst = LSTN(lst);
	}
	return (out);
}