/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 16:09:12 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/15 15:37:52 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int x, char a, char b, char c)
{
	if (x > 0)
	{
		ft_putchar(a);
		x--;
	}
	while (x > 1)
	{
		ft_putchar(b);
		x--;
	}
	if (x == 1)
		ft_putchar(c);
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (y <= 0 || x <= 0)
		return (0);
	if (y > 0)
	{
		print(x, 'A', 'B', 'A');
		y--;
	}
	while (y > 1)
	{
		print(x, 'B', ' ', 'B');
		y--;
	}
	if (y == 1)
		print(x, 'C', 'B', 'C');
	return (0);
}
