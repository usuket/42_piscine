#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

//gcc main.c ../ex00/ft_create_elem.c ../ex01/ft_list_push_back.c ../ex07/ft_list_at.c ft_list_reverse.c

int	main(void)
{
	t_list *list;
	list = malloc(sizeof(t_list));
	list = ft_create_elem("t0\t");
	ft_list_push_back(&list,"t1\t");
	ft_list_push_back(&list,"t2\t");
	ft_list_push_back(&list,"t3\t");
	ft_list_push_back(&list,"t4\t");
	ft_list_push_back(&list,"t5\t");

	ft_list_reverse(&list);

	t_list *at0 = ft_list_at(list,0);
	printf("at0 is :%s\n",at0->data);

	t_list *at1 = ft_list_at(list,1);
	printf("at1 is :%s\n",at1->data);

	t_list *at5 = ft_list_at(list,5);
	printf("at5 is :%s\n",at5->data);
	return (0);
}
