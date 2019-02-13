#include "ft_btree.h"
#include <stdio.h>

void print(void *str)
{
	printf("%s\n",str);
}

int main(void)
{
    t_btree *node = btree_create_node("I'm node.");
	node->left = btree_create_node("I'm left.");
	node->right = btree_create_node("I'm right.");
	node->left->left = btree_create_node("I'm left too.");

	void (*functionPtr)(void *);
	functionPtr = &print;
	btree_apply_prefix(node,functionPtr);
}