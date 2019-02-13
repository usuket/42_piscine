#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list *add_list(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if(tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}



void print_list(t_list *list)
{
	while(list)
	{
		printf("%s",list->str);
		list = list->next;
	}
}

int main(void)
{
	t_list *list;
	list = NULL;

	list = add_list(list, "toto\n");
	list = add_list(list, "tata\n");
	list = add_list(list, "tutu\n");

	print_list(list);
	return (0);
}