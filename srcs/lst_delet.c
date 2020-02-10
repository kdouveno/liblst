/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:32:41 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 17:50:22 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

void	lst_deln(t_list	*lst, size_t n)
{
	t_list	tmp;

	while (*lst && n > 0)
	{
		tmp = *lst;
		*lst = LSTN(*lst);
		free(tmp);
		n--;
	}
}

void	lst_deli(t_list *lst, size_t i)
{
	t_list	*tmp;
	t_list	*tofree;

	if (!i)
		return (lst_deln(lst, 1));
	tmp = *lst;
	while (tmp && i > 1)
	{
		tmp = LSTN(tmp);
	}
	if (!tmp || !LSTN(tmp))
		return ;
	tofree = LSTN(tmp);
	LSTN(tmp) = LSTN(tofree);
	free(tofree);
}

