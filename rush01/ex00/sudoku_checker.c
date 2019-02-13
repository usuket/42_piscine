/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 20:12:26 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/22 20:12:27 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_and_set_num(int y, int x, int *array, int matrix[][9])
{
	int count;
	int num;
	int i;

	count = 0;
	num = 0;
	i = 0;
	while (i < 10)
	{
		if (array[i] != 0)
		{
			num = array[i];
			count++;
		}
		i++;
	}
	if (count == 1)
	{
		matrix[y][x] = num;
		return (1);
	}
	return (0);
}

void	check_row_col(int y, int x, int *array, int matrix[][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		array[matrix[i][x]] = 0;
		i++;
	}
	i = 0;
	while (i < 9)
	{
		array[matrix[y][i]] = 0;
		i++;
	}
}

int		define_block(int index)
{
	if (index <= 2)
		return (0);
	else if (index <= 5)
		return (3);
	else
		return (6);
}

void	check_block(int y, int x, int *array, int matrix[][9])
{
	int i;
	int j;
	int block_y_idx;
	int block_x_idx;

	i = 0;
	block_y_idx = define_block(y);
	block_x_idx = define_block(x);
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			array[matrix[block_y_idx + i][block_x_idx + j]] = 0;
			j++;
		}
		i++;
	}
}
