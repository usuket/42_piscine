#include <stdio.h>

int		ft_max(int *array, int len);
int		main(void)
{
	int array[5] = {1,3,5,4,2};
	int max1 = ft_max(array,5);
	printf("%d\n",max1);

	int array2[4] = {3,10,4,2};
	int max2 = ft_max(array2,4);
	printf("%d\n",max2);

}