/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:24:04 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/19 16:24:06 by ysakakib         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		if (!*src)
		{
			return (res);
		}
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}

int		define_character_size(int argc, char **argv)
{
	int		i;
	int		j;
	int		char_size;

	i = 1;
	char_size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			char_size++;
			j++;
		}
		i++;
	}
	return (char_size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		char_size;
	int		index;

	if (argc <= 1)
		return ((void *)0);
	index = 0;
	char_size = define_character_size(argc, argv);
	string = malloc(sizeof(char) * (char_size) + 1);
	while (index < argc)
	{
		ft_strcat(string, argv[index]);
		if (index != argc - 1)
			ft_strcat(string, "\n");
		index++;
	}
	ft_strcat(string, "\0");
	return (string);
}
