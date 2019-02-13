/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 12:50:05 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/20 12:50:06 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	else if ((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	else
		return (k);
}