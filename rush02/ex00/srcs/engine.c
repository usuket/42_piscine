/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:25:56 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 15:25:58 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmod.h"

char	**g_grid;
int		g_max_x;
int		g_max_y;

char	*g_names[] = {
	"[rush-00]",
	"[rush-01]",
	"[rush-02]",
	"[rush-03]",
	"[rush-04]"
};

void	array_maker(t_lines_list *root)
{
	int				i;
	int				sz;
	int				tmp;
	t_lines_list	*cur;

	i = 0;
	sz = 0;
	cur = root;
	while (cur)
	{
		if (cur->str[0])
			sz++;
		cur = cur->next;
	}
	g_grid = (char**)malloc(sizeof(char*) * (sz + 1));
	cur = root;
	while (i < sz)
	{
		tmp = ft_strlen(cur->str);
		g_grid[i] = (char*)malloc(tmp);
		ft_strncpy(g_grid[i], cur->str, tmp);
		cur = cur->next;
		i++;
	}
	g_max_y = sz;
}

int		check_line_lengths(void)
{
	int		i;
	int		check_x;

	g_max_x = 0;
	i = 0;
	while (i < g_max_y)
	{
		check_x = ft_strlen(g_grid[i]);
		if (!g_max_x)
			g_max_x = check_x;
		if (check_x != g_max_x)
			return (0);
		i++;
	}
	return (1);
}

void	output(char in, int check, int n, int first)
{
	if (check > 32)
		return ;
	if ((in & check) == check)
	{
		if (first)
			first = 0;
		else
			write(1, " || ", 4);
		write(1, g_names[n], ft_strlen(g_names[n]));
		write(1, " [", 2);
		ft_putnbr(g_max_x);
		write(1, "] [", 3);
		ft_putnbr(g_max_y);
		write(1, "]", 1);
	}
	check *= 2;
	output(in, check, ++n, first);
}

void	analysis(t_lines_list *root)
{
	char current;

	current = 31;
	array_maker(root);
	if (!check_line_lengths())
	{
		write(1, "aucune\n", 7);
		return ;
	}
	current -= rush00(g_max_x, g_max_y, g_grid, 1);
	current -= rush01(g_max_x, g_max_y, g_grid, 1);
	current -= rush02(g_max_x, g_max_y, g_grid, 1);
	current -= rush03(g_max_x, g_max_y, g_grid, 1);
	current -= rush04(g_max_x, g_max_y, g_grid, 1);
	if (current == 0)
	{
		write(1, "aucune\n", 7);
		return ;
	}
	output(current, 1, 0, 1);
	write(1, "\n", 1);
}
