/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:42:26 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 16:22:15 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lst.h"

t_list	lst_getn(t_list ptr, size_t n)
{
	while (ptr && n > 0)
	{
		ptr = LSTN(ptr);
		n--;
	}
	return (ptr);
}