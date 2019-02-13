int ft_fibonacci(int index);

#include <stdio.h>

int main (void)
{

	printf ("input:%d ",-1);
	printf ("output:%d\n", ft_fibonacci(-1));

	printf ("input:%d ",0);
	printf ("output:%d\n", ft_fibonacci(0));

	printf ("input:%d ",1);
	printf ("output:%d\n", ft_fibonacci(1));

	printf ("input:%d ",2);
	printf ("output:%d\n", ft_fibonacci(2));

	printf ("input:%d ",3);
	printf ("output:%d\n", ft_fibonacci(3));

	printf ("input:%d ",4);
	printf ("output:%d\n", ft_fibonacci(4));

	printf ("input:%d ",5);
	printf ("output:%d\n", ft_fibonacci(5));

	printf ("input:%d ",6);
	printf ("output:%d\n", ft_fibonacci(6));
}