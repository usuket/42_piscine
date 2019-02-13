#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *list;
	list = ft_create_elem("toto\n");
	printf("%s",list->data);
	list = ft_create_elem("tutu\n");
	printf("%s",list->data);

	// ex02
	ft_list_push_front(&list,"ex02_list_1\n");
	printf("%s",list->data);
	ft_list_push_front(&list,"ex02_list_2\n");
	printf("%s",list->data);
	printf("%s",list->next->data);
	return (0);
}
