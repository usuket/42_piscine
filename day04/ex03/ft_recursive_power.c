/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 17:17:29 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/14 17:17:31 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb <= 0)
		return (0);
	else if (1 < power)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (nb);
}
