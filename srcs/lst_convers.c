/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_convers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:19:02 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 17:29:56 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

void	*lst_totab(t_list lst, const size_t data_size)
{
	size_t	list_size;
	void	*out;
	void	*tmp;

	list_size = lst_size(lst);
	if (!(out = (void*)malloc(data_size * list_size)))
		return (NULL);
	tmp = out;
	while (lst)
	{
		memcpy(tmp, LSTA(lst), data_size);
		tmp += data_size;
		lst = LSTN(lst);
	}
	return (out);
}