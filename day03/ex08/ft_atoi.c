/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:48:22 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/13 23:17:46 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	converted_number;
	int	string_size;
	int	digits;
	int	i;

	string_size = 0;
	converted_number = 0;
	digits = 1;
	i = 0;
	while (str[string_size] != '\0')
	{
		string_size++;
		digits = digits * 10;
	}
	while (str[i] != '\0')
	{
		//42abc:0:42
		digits = digits / 10;
		if ('a' <= str[i] && str[i] <= 'z')
			return (0);
		if ('0' <= str[i] && str[i] <= '9')
			converted_number = converted_number + (str[i] - '0') * digits;
		i++;
	}
	return (converted_number);
}
