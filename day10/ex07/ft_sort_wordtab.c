/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 19:24:15 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/24 19:24:17 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tab_cmp(char *tab1, char *tab2)
{
	int i;

	i = 0;
	while (tab1[i] != '\0' && tab2[i] != '\0' && tab1[i] == tab2[i])
		i++;
	return (tab1[i] - tab2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		k;

	k = 0;
	while (!k)
	{
		i = 0;
		k = 1;
		while (tab[++i])
			if (ft_tab_cmp(tab[i - 1], tab[i]) > 0)
			{
				ft_swap(tab + i - 1, tab + i);
				k = 0;
			}
	}
}
