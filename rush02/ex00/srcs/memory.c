/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:35:11 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 15:35:16 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmod.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	int truncate;
	int called;

	called = 0;
	truncate = 1000000000;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb %= 1000000000;
		}
		nb *= -1;
	}
	while (truncate > 0)
	{
		if ((nb / truncate) != 0 || called == 1 || (nb == 0 && truncate == 1))
		{
			called = 1;
			ft_putchar((nb / truncate) + '0');
		}
		nb %= truncate;
		truncate /= 10;
	}
}

void		*ft_memcpy(void *dst, const void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char*)src;
	d = (char*)dst;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

void		*ft_realloc(void *ptr, unsigned int size)
{
	void	*new;

	new = malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}
