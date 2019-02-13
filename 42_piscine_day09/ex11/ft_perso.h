/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 15:17:46 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/20 15:17:48 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H
# define SAVE_AUSTIN_POWERS 1
# include <string.h>

struct		s_perso
{
	char	*name;
	double	life;
	int		age;
	int		profession;
};
typedef	struct s_perso	t_perso;

#endif
