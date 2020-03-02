/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_loopers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karldouvenot <karldouvenot@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:54:12 by karldouveno       #+#    #+#             */
/*   Updated: 2020/03/02 12:03:42 by karldouveno      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

void	lst_each(t_list lst, void (*fx)(void*, size_t))
{
	int	i;

	i = 0;
	while(lst)
	{
		fx(LSTA(lst), i++);
		lst = LSTN(lst);
	}
}