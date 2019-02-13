/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:26:14 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/25 23:26:16 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	if (begin_list)
	{
		list = begin_list->next;
		while (list)
		{
			(*f)(list->data);
			list = list->next;
		}
	}
}
