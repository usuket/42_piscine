#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

//gcc -Werror -Wall -Wextra *c  ../ex01/ft_list_push_back.c ../ex02/ft_list_push_front.c ../ex00/ft_create_elem.c

int	main(void)
{
	t_list *list;
	t_list *last;
	list = malloc(sizeof(t_list));
	list = ft_create_elem("toto\t");
	last = ft_list_last(list);
	printf("last is :%s\n",last->data);
	ft_list_push_back(&list,"tutu\t");
	ft_list_push_back(&list,"tata\t");
	ft_list_push_front(&list,"tete\t");

	last = ft_list_last(list);
	printf("last is :%s\n",last->data);
	return (0);
}
