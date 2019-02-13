#include "ft_create_elem.c"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list *list;
	list = ft_create_elem("toto\n");
	printf("%s",list->data);
	list = ft_create_elem("tutu\n");
	printf("%s",list->data);
	return (0);
}
