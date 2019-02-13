/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:45:50 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/17 11:45:57 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n))
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break ;
		}
		else if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = dest[i];
		}
		i++;
	}
	return (dest);
}
