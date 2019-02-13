/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:42:52 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/25 22:42:54 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next_link;
	t_list	*link;

	link = *begin_list;
	while (link)
	{
		next_link = link->next;
		free(link);
		link = next_link;
	}
	*begin_list = NULL;
}
