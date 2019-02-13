/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 19:32:41 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/22 19:33:03 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putstr(char *str);
int		check_and_set_num(int y, int x, int *array, int matrix[][9]);
void	check_row_col(int y, int x, int *array, int matrix[][9]);
void	check_block(int y, int x, int *array, int matrix[][9]);

void	set_array(int *array)
{
	int i;

	i = 0;
	while (i < 10)
	{
		array[i] = i;
		i++;
	}
}

int		fill(int y, int x, int matrix[][9])
{
	int array[10];

	set_array(array);
	check_row_col(y, x, array, matrix);
	check_block(y, x, array, matrix);
	return (check_and_set_num(y, x, array, matrix));
}

int		check_is_solved(int matrix[][9])
{
	int y;
	int x;
	int count;

	y = 0;
	x = 0;
	count = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			count = count + matrix[y][x];
			x++;
		}
		y++;
	}
	return (count == 405);
}

int		solve(int y, int x, int matrix[][9])
{
	if (y >= 9 || x >= 9)
		return (1);
	if (matrix[y][x] == 0)
	{
		fill(y, x, matrix);
	}
	solve(y, x + 1, matrix);
	solve(y + 1, x, matrix);
	return (1);
}
