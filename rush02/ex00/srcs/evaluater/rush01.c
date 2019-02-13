/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 18:11:08 by ymiao             #+#    #+#             */
/*   Updated: 2017/01/15 18:11:10 by ymiao            ###   ########.fr       */
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
		print(x, '/', '*', '\\');
		y--;
	}
	while (y > 1)
	{
		print(x, '*', ' ', '*');
		y--;
	}
	if (y == 1)
		print(x, '\\', '*', '/');
	return (0);
}
