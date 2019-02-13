#include "ft_ultimate_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 7;
	b = 3;
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("stored:%d\n", a);
	printf("reminder:%d", b);
}
