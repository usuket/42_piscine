/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 19:49:22 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/24 19:49:24 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		k;

	k = 0;
	while (!k)
	{
		i = 0;
		k = 1;
		while (tab[++i])
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				ft_swap(tab + i - 1, tab + i);
				k = 0;
			}
	}
}
