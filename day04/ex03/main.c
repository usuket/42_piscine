int ft_recursive_power(int nb, int power);

#include <stdio.h>

int main (void)
{

	printf ("input:%s ","(-1,0)");
	printf ("output:%d\n", ft_recursive_power (-1,0));

	printf ("input:%s ","(-1,1)");
	printf ("output:%d\n", ft_recursive_power (-1,1));

	printf ("input:%s ","(-1,2)");
	printf ("output:%d\n", ft_recursive_power (-1,2));

	printf ("input:%s ","(1,-1)");
	printf ("output:%d\n", ft_recursive_power (1,-1));

	printf ("input:%s ","(0,0)");
	printf ("output:%d\n", ft_recursive_power (0,0));

	printf ("input:%s ","(0,1)");
	printf ("output:%d\n", ft_recursive_power (0,1));

	printf ("input:%s ","(1,0)");
	printf ("output:%d\n", ft_recursive_power (1,0));

	printf ("input:%s ","(1,1)");
	printf ("output:%d\n", ft_recursive_power (1,1));

	// TODO FIX X powered 0 = 1;
	printf ("input:%s ","(2,0)");
	printf ("output:%d\n", ft_recursive_power (2,0));

	printf ("input:%s ","(2,2)");
	printf ("output:%d\n", ft_recursive_power (2,2));

	printf ("input:%s ","(3,3)");
	printf ("output:%d\n", ft_recursive_power (3,3));

	printf ("input:%s ","(4,4)");
	printf ("output:%d\n", ft_recursive_power (4,4));

	printf ("input:%s ","(10,10)");
	printf ("output:%d\n", ft_recursive_power (10,10));

	printf ("input:%s ","(12,12)");
	printf ("output:%d\n", ft_recursive_power (12,12));

	printf ("input:%s ","(15,15)");
	printf ("output:%d\n", ft_recursive_power (15,15));
}