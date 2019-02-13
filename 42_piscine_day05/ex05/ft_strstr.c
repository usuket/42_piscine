/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 17:48:51 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/17 17:48:54 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (to_find[i] == '\0')
		return ((char*)str);
	while (*str)
	{
		if (*str == '\n')
			break ;
		if (*str == to_find[i])
			i++;
		else
			i = 0;
		if (to_find[i] == '\0')
			return ((char*)(str - i + 1));
		str++;
	}
	return (0);
}
