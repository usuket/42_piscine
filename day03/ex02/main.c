#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int a;
	int b;
	int *a_ptr;
	int *b_ptr;

	a = 10;
	b = 20;
	a_ptr = &a;
	b_ptr = &b;

	printf("a:%d b:%d\n",a,b);
	ft_swap(a_ptr, b_ptr);
	printf("a:%d b:%d",a,b);
}
