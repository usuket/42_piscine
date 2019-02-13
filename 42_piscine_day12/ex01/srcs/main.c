/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:28:11 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/26 14:28:12 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <ft_header.h>

#define BUFF_SIZE 1

void	disp_error(char *e1, char *e2, char *e3)
{
	ft_put_error_string(e1);
	ft_put_error_string(e2);
	ft_put_error_string(e3);
}

int		ft_cat(char *file_path)
{
	int		fd;
	char	buffer;

	errno = 0;
	fd = open(file_path, O_RDONLY);
	if (errno == 2)
	{
		disp_error("cat: ", file_path, ": Is a directory\n");
		return (1);
	}
	else if (errno == 13)
	{
		disp_error("cat: ", file_path, ": Permission denied\n");
		return (1);
	}
	else if (errno != 0)
	{
		disp_error("cat: ", file_path, ": No such file or directory\n");
		return (1);
	}
	while (read(fd, &buffer, BUFF_SIZE))
		write(1, &buffer, BUFF_SIZE);
	close(fd);
	return (1);
}

void	read_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		ret;

	i = 1;
	ret = 0;
	if (argc < 2 || argv[1][0] == '-')
		read_stdin();
	while (i < argc)
	{
		ret = ft_cat(argv[i]);
		i++;
	}
	return (ret);
}
