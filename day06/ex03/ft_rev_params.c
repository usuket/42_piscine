/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:02:13 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/18 18:02:15 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int argv_index;

	if (argc <= 1)
	{
		return (0);
	}
	i = 0;
	argv_index = argc - 1;
	while (argv_index >= 1)
	{
		while (argv[argv_index][i] != '\0')
		{
			ft_putchar(argv[argv_index][i]);
			i++;
		}
		ft_putchar('\n');
		argv_index--;
		i = 0;
	}
	return (0);
}
