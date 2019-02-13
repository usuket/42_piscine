/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 11:24:43 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/19 11:25:21 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len;
	int		j;

	len = 0;
	while (src[len])
		len++;
	new_str = malloc(sizeof(char) * (len + 1));
	j = 0;
	while (j < len)
	{
		new_str[j] = src[j];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
