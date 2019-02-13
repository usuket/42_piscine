/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:58:34 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/19 18:58:37 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	set_hour(int hour, int *hour_1, int *hour_2)
{
	if (0 == hour)
	{
		*hour_1 = 12;
		*hour_2 = 1;
	}
	else if (1 <= hour && hour <= 11)
	{
		*hour_1 = hour;
		*hour_2 = hour + 1;
	}
	else if (12 == hour)
	{
		*hour_1 = 12;
		*hour_2 = hour - 12 + 1;
	}
	else if (13 <= hour && hour <= 23)
	{
		*hour_1 = hour - 12;
		*hour_2 = hour - 12 + 1;
	}
	else if (24 == hour)
	{
		*hour_1 = hour - 12;
		*hour_2 = hour - 24 + 1;
	}
}

void	set_suffix(int hour, char *sfx_1, char *sfx_2)
{
	if (0 == hour)
	{
		*sfx_1 = 'P';
		*sfx_2 = 'A';
	}
	else if (1 <= hour && hour <= 11)
	{
		*sfx_1 = 'A';
		*sfx_2 = 'A';
	}
	else if (12 == hour)
	{
		*sfx_1 = 'A';
		*sfx_2 = 'P';
	}
	else if (13 <= hour && hour <= 23)
	{
		*sfx_1 = 'P';
		*sfx_2 = 'P';
	}
	else if (24 == hour)
	{
		*sfx_1 = 'P';
		*sfx_2 = 'A';
	}
}

void	ft_takes_place(int hour)
{
	int		hour_1;
	int		hour_2;
	char	sfx_1;
	char	sfx_2;

	hour_1 = 0;
	hour_2 = 0;
	sfx_1 = 'A';
	sfx_2 = 'A';
	set_hour(hour, &hour_1, &hour_2);
	set_suffix(hour, &sfx_1, &sfx_2);
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %d.00 %c.M. AND %d.00 %c.M.\n", hour_1, sfx_1, hour_2, sfx_2);
}
