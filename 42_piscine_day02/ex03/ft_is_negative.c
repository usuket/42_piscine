/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 23:09:12 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/12 23:14:14 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar('P');

	}
	else
	{
		ft_putchar('N');
	}
}


int	main(void)
{
	ft_is_negative(-10);
}