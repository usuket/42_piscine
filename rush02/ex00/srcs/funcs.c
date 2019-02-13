/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:40:39 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 15:40:44 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmod.h"

void			ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_lines_list	*ft_create_element(void *data)
{
	t_lines_list	*tmp;

	tmp = NULL;
	tmp = (t_lines_list *)malloc(sizeof(*tmp));
	if (tmp)
	{
		tmp->str = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void			ft_list_push_back(t_lines_list **begin_list, void *data)
{
	t_lines_list *list;

	if (*begin_list)
	{
		list = *begin_list;
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_create_element(data);
	}
	else
		*begin_list = ft_create_element(data);
}

void			ft_list_foreach(t_lines_list *begin_list, void (*f)(char *))
{
	while (begin_list)
	{
		f(begin_list->str);
		begin_list = begin_list->next;
	}
}
