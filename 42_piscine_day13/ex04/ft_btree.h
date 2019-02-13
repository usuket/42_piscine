/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:12:27 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/27 11:12:29 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct			s_btree
{
	struct s_btree		*parent;
	struct s_btree		*left;
	struct s_btree		*right;
	void				*item;
}						t_btree;

t_btree					*btree_create_node(void *item);
void					btree_apply_prefix(t_btree *root, void (*f)(void *));
void					btree_apply_infix(t_btree *root, void (*f)(void *));
void					btree_apply_suffix(t_btree *root, void (*f)(void *));
void					btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *));
#endif
