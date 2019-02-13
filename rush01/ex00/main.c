/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 19:36:15 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/22 20:43:26 by evanheum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		check_is_solved(int matrix[][9]);
int		solve(int y, int x, int matrix[][9]);

void	display(int matrix[][9])
{
	int y;
	int x;

	y = 0;
	while (y < 9)
	{
		x = 0;

		while (x < 9)
		{
			ft_putchar(matrix[y][x] + '0');
			if (x != 8)
				ft_putstr(" ");
			x++;
		}
		ft_putstr("\n");
		y++;
	}
}

void	set_puzzle(char **argv, int matrix[][9])
{
	int	y;
	int	x;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			if (argv[y + 1][x] == '.')
				matrix[y][x] = 0;
			else
				matrix[y][x] = (argv[y + 1][x] - '0');
			x++;
		}
		y++;
	}
}

int		validate_argv_num_length(int argc, char **argv)
{
	int i;
	int len;

	if (argc != 10)
	{
		return (0);
	}
	i = 0;
	while (i < 9)
	{
		len = 0;
		while (argv[i + 1][len] != '\0')
		{
			if (argv[i + 1][len] != '.'
				&& !('0' <= argv[i + 1][len] && argv[i + 1][len] <= '9'))
			{
				return (0);
			}
			len++;
		}
		if (len != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int matrix[9][9];
	int t;

	if (validate_argv_num_length(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (check_is_solved(matrix) != 1)
	{
		set_puzzle(argv, matrix);
		t = 0;
		while (t < 10)
		{
			solve(0, 0, matrix);
			t++;
		}
	}
	display(matrix);
}
