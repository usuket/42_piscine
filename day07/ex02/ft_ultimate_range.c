/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:16:06 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/19 15:16:10 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *int_array;
	int i;

	*range = (void *)0;
	if (min >= max)
	{
		return (0);
	}
	int_array = malloc(sizeof(int) * (max - min));
	if (int_array == NULL)
	{
		return (0);
	}
	i = 0;
	while (min + i < max)
	{
		int_array[i] = min + i;
		i++;
	}
	*range = int_array;
	return (i);
}
