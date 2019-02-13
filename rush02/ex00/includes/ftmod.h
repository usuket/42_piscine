/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmod.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:25:09 by bbrady            #+#    #+#             */
/*   Updated: 2017/01/28 15:25:17 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMOD_H
# define FTMOD_H

# include <stdlib.h>
# include <unistd.h>

typedef struct				s_lines_list
{
	struct s_lines_list		*next;
	char					*str;
}							t_lines_list;

void						ft_putstr(char *str);
int							ft_strlen(char *str);
void						ft_putnbr(int nb);

t_lines_list				*ft_create_element(void *data);
void						ft_list_push_back(t_lines_list **begin_list,
								void *data);
void						ft_list_foreach(t_lines_list *begin_list,
								void(*f)(char *));
void						*ft_realloc(void *ptr, unsigned int size);
void						analysis(t_lines_list *root);
char						*ft_strncpy(char *dest, char *src, unsigned int n);
int							rush00(int x, int y, char **grid, int allgood);
int							rush01(int x, int y, char **grid, int allgood);
int							rush02(int x, int y, char **grid, int allgood);
int							rush03(int x, int y, char **grid, int allgood);
int							rush04(int x, int y, char **grid, int allgood);

#endif
