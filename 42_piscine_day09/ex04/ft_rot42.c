/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 13:10:56 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/20 13:10:57 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotate_upper(char c)
{
	c = c - 'A';
	c = ((c + 42) % 26);
	c = c + 'A';
	return (c);
}

char	rotate_lower(char c)
{
	c = c - 'a';
	c = ((c + 42) % 26);
	c = c + 'a';
	return (c);
}

char	rotate(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (rotate_upper(c));
	else if (c >= 'a' && c <= 'z')
		return (rotate_lower(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
