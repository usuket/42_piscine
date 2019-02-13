int ft_iterative_factorial (int nb);

#include <stdio.h>

int main (void)
{
	printf ("input:%d\n",-1);
	printf ("output:%d\n\n", ft_iterative_factorial (-1));

	printf ("input:%d\n",0);
	printf ("output:%d\n\n", ft_iterative_factorial (0));

	printf ("input:%d\n",1);
	printf ("output:%d\n\n", ft_iterative_factorial (1));

	printf ("input:%d\n",3);
	printf ("output:%d\n\n", ft_iterative_factorial (3));

	printf ("input:%d\n",10);
	printf ("output:%d\n\n", ft_iterative_factorial (10));

	printf ("input:%d\n",12);
	printf ("output:%d\n\n", ft_iterative_factorial (12));

	printf ("input:%d\n",15);
	printf ("output:%d\n\n", ft_iterative_factorial (15));

	printf ("input:%d\n",16);
	printf ("output:%d\n\n", ft_iterative_factorial (16));

	printf ("input:%d\n",17);
	printf ("output:%d\n\n", ft_iterative_factorial (17));

	printf ("input:%d\n",18);
	printf ("output:%d\n\n", ft_iterative_factorial (18));
}