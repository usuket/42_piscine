/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:39:07 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/14 22:46:24 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	wall(int x, char a, char b, char c)
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
	{
		ft_putchar(c);
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			wall(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		y--;
		while (y > 1)
		{
			wall(x, 'B', ' ', 'B');
			ft_putchar('\n');
			y--;
		}
		if (y == 1)
		{
			wall(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
	}
}
