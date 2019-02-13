/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:41:19 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 15:41:22 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmod.h"

#define BUF_SIZE 4096

t_lines_list	*g_lines;

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	read_lines(char **str)
{
	int				len;
	char			*line;

	len = 0;
	while ((*str)[len] && (*str)[len] != '\n')
		len++;
	line = (char*)malloc(sizeof(char) * len);
	ft_list_push_back(&g_lines, ft_strncpy(line, *str, len));
	*str += len;
	*str += **str == '\n' ? 1 : 0;
	if (**str != '\0')
		read_lines(str);
}

char	*ft_read_stdin(char *buf, int buf_cap)
{
	int				read_size;
	int				max_read;
	int				buf_offset;

	max_read = buf_cap / 2;
	buf_offset = 0;
	while ((read_size = read(0, buf + buf_offset, max_read)) > 0)
	{
		buf_offset += read_size;
		if (buf_offset + max_read >= buf_cap)
		{
			buf_cap *= 2;
			buf = ft_realloc(buf, buf_cap);
		}
	}
	buf[buf_offset + 1] = 0;
	return (buf);
}

int		main(void)
{
	char	*buf;

	g_lines = 0;
	buf = (char*)malloc(BUF_SIZE);
	buf = ft_read_stdin(buf, BUF_SIZE);
	read_lines(&buf);
	analysis(g_lines);
	return (0);
}
