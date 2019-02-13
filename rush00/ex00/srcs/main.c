/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:38:51 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/29 14:14:06 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (1);

	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
