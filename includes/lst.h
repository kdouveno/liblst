/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdouveno <kdouveno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 16:50:29 by kdouveno          #+#    #+#             */
/*   Updated: 2020/02/10 18:10:05 by kdouveno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# define LSTP(data) &data, sizeof(data) //Shortens insertion functions Parameters syntax. To use only in list_insertion functions. ex: lst_push(&some_list, LSTP(some_struct))
# define LSTN(tlist) (*(t_list*)tlist) //Get the list_t Next element from a t_list
# define LSTE(tlist, type) (type*)(tlist + sizeof(t_list)) //Get the Element pointer acess parsed to 'type' from the list
# define LSTA(tlist) (void*)(tlist + sizeof(t_list)) //Get the element void* Adress pointer

typedef void* t_list;

int		lst_push(t_list *begin, const void *data, const size_t data_size);
int		lst_set(t_list ptr, const void *data, const size_t data_size);
int		lst_apnd(t_list *ptr, const void *data, const size_t data_size);

int		lst_pushl(t_list *begin, t_list l);
int		lst_apndl(t_list *ptr, t_list l);

void	lst_deln(t_list	*lst, size_t n);
void	lst_deli(t_list	*lst, size_t i);

t_list	lst_getn(t_list ptr, size_t n);
int		lst_setn(t_list ptr, size_t n, const void *data, const size_t data_size);

t_list	lst_create(const void *data, const size_t data_size);
size_t	lst_size(t_list lst);

void	*lst_totab(t_list lst, const size_t data_size);

#endif