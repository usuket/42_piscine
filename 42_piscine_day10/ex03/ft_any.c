/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 22:48:07 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/23 22:48:09 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}
