/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_loopers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karldouvenot <karldouvenot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:54:12 by karldouveno       #+#    #+#             */
/*   Updated: 2020/05/18 16:02:15 by karldouveno      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

void	lst_each_i(t_list lst, void (*fx)(void*, size_t))
{
	int	i;

	i = 0;
	while(lst)
	{
		fx(LSTA(lst), i++);
		lst = LSTN(lst);
	}
}

void	lst_each(t_list lst, void (*fx)(void*))
{
	while(lst)
	{
		fx(LSTA(lst));
		lst = LSTN(lst);
	}
}

void	lst_each_di(t_list lst, void (*fx)(void *lst, void *data, size_t i), void *data)
{
	int	i;

	i = 0;
	while(lst)
	{
		fx(LSTA(lst), data, i++);
		lst = LSTN(lst);
	}
}