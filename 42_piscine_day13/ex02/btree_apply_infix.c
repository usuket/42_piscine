/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:05:58 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/27 15:06:00 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->right)
		btree_apply_infix(root->right, applyf);
	if (root->item)
		(*applyf)(root->item);
	if (root->left)
		btree_apply_infix(root->left, applyf);
}
