#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 3;
	printf("a:%d\n", a);
	printf("b:%d\n", b);
	ft_div_mod(a, b, &div, &mod);
	printf("div:%d\n", div);
	printf("mod:%d", mod);
}
