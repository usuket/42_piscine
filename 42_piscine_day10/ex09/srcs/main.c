/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:56:44 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/24 21:56:47 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <s_dope.h>
#include <do_op.h>
#include <ft_opp.h>

int				ft_atoi(const char *str);
int				ft_putchar(char c);
int				ft_strcmp(char *s1, char *s2);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);

struct s_dope	convert(char **argv)
{
	struct s_dope object;

	object.ret = 0;
	object.i1 = ft_atoi(argv[1]);
	object.i2 = ft_atoi(argv[3]);
	object.ope = argv[2];
	return (object);
}

int				ft_usage(int a, int b)
{
	int i;

	i = 0;
	a = 0;
	b = 0;
	return (1);
}

int				validate_has_error(struct s_dope object)
{
	if (ft_strcmp(object.ope, "/") == 0 && object.i2 == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	else if (ft_strcmp(object.ope, "%") == 0 && object.i2 == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int				main(int argc, char **argv)
{
	struct s_dope object;

	if (argc != 4)
		return (0);
	object = convert(argv);
	if (validate_has_error(object) == 1)
		return (0);
	if (ft_strcmp(object.ope, "+") == 0)
		object.ret = object.i1 + object.i2;
	else if (ft_strcmp(object.ope, "-") == 0)
		object.ret = object.i1 - object.i2;
	else if (ft_strcmp(object.ope, "*") == 0)
		object.ret = object.i1 * object.i2;
	else if (ft_strcmp(object.ope, "/") == 0)
		object.ret = object.i1 / object.i2;
	else if (ft_strcmp(object.ope, "%") == 0)
		object.ret = object.i1 % object.i2;
	else
	{
		ft_putstr("0\n");
		return (0);
	}
	ft_putnbr(object.ret);
	ft_putstr("\n");
	return (0);
}
