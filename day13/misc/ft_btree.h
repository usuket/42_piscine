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

typedef struct          s_btree
{
    struct s_btree      *parent;
    struct s_btree      *left;
    struct s_btree      *right;
    void                *data;
};                      t_btree;
