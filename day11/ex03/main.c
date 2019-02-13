#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *list;
	list = ft_create_elem("toto\t");
	printf("%s",list->data);
	printf("%d\n",ft_list_size(list));
	ft_list_push_back(&list,"tutu\t");
	printf("%s",list->data);
	printf("%d\n",ft_list_size(list));
	ft_list_push_back(&list,"tata\t");
	printf("%s",list->data);
	printf("%d\n",ft_list_size(list));
	return (0);
}
