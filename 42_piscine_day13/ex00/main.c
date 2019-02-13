#include "ft_btree.h"
#include <stdio.h>

int main(void)
{
    t_btree *node = btree_create_node("aaa");
    printf("%s",node->item);
}