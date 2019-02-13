/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 23:20:49 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/12 23:21:24 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* WIP */

#include "unistd.h"

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

int main()
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    k = 0;
    while (i <= 9)
    {
        while (j <= 9)
        {
            while (k <= 9)
            {
                /* Skip if number is same value. */
                if (i == j && j == k)
                {
                    k ++;
                    continue;
                }
                else
                {
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(k + '0');
                }
                if (i == 9 && j == 9 && k == 9)
                {
                    return (0);
                }
                else
                {
                    ft_putchar(',');
                }
                k ++;
            }
            k = 0;
            j ++;
        }
        j = 0;
        i ++;
    }
    return (0);
}
