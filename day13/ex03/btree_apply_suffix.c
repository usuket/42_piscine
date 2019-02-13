/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakakib <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:19:07 by ysakakib          #+#    #+#             */
/*   Updated: 2017/01/27 15:19:12 by ysakakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root->right)
		btree_apply_suffix(root->right, applyf);
	if (root->left)
		btree_apply_suffix(root->left, applyf);
	if (root->item)
		(*applyf)(root->item);
}
