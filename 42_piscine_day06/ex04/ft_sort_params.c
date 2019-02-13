/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:31:33 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/18 18:31:34 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	putline(char *c)
{
	ft_putstr(c);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	char	*tmp;
	int		is_diff_exist;
	int		i;

	is_diff_exist = 1;
	while (is_diff_exist)
	{
		is_diff_exist = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				is_diff_exist = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		putline(argv[i]);
	return (0);
}
