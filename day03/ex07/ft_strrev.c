/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 12:39:26 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/13 12:39:33 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		size_of_string;
	char	temp;

	i = 0;
	size_of_string = 0;
	while (1)
	{
		if (str[size_of_string] == '\0')
			break ;
		else
			size_of_string++;
	}
	size_of_string--;
	while (i < size_of_string)
	{
		temp = str[size_of_string];
		str[size_of_string] = str[i];
		str[i] = temp;
		i++;
		size_of_string--;
	}
	return (str);
}
