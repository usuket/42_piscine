/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 17:18:05 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/14 17:18:24 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int value;

	if (nb <= 0)
		return (0);
	else if (nb > 1)
	{
		value = nb * ft_recursive_factorial(nb - 1);
		if (value <= 0)
			return (0);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (nb);
}
