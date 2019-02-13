/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 01:46:34 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/26 01:46:35 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ft_header.h>

#define BUF_SIZE 1

void	display_file(int fd)
{
	char buffer;

	while (read(fd, &buffer, BUF_SIZE) != 0)
		write(1, &buffer, BUF_SIZE);
}

int		main(int argc, char **argv)
{
	char	*file_path;
	int		fd;

	if (argc <= 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (3 <= argc)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	file_path = argv[1];
	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File open failed.\n");
		return (1);
	}
	display_file(fd);
	close(fd);
	return (0);
}
