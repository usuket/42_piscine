/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:06:48 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/19 13:06:57 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *int_array;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	int_array = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min + i < max)
	{
		int_array[i] = min + i;
		i++;
	}
	return (int_array);
}
