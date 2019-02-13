// Do not push

#include <stdio.h>

int *ft_range(int min, int max);

int		diff(int x, int y){
	return(x > y ? x - y : y - x);
}

void test_ft_range(int min, int max) {
	int *array = ft_range(min, max);

	printf("min:%d max:%d\t", min, max);
	if(array == NULL){
		printf("NULL\n");
		return ;
	}

	int df = diff(min,max);

	int i = 0;
	while (i < df) {
		printf("%d", array[i]);
		if (i < df - 1) {
			printf(",");
		}
		i++;
	}
	printf("\n");
}


int main(void) {
	test_ft_range(-3, -4);
	test_ft_range(-3, -3);
	test_ft_range(-3, -2);
	test_ft_range(-3, -1);
	test_ft_range(-3, 0);
	test_ft_range(-3, 1);
	test_ft_range(-3, 2);
	test_ft_range(-3, 3);
	test_ft_range(-1, -1);
	test_ft_range(-1, 0);
	test_ft_range(-1, 1);
	test_ft_range(0, -1);
	test_ft_range(0, 0);
	test_ft_range(0, 1);
	test_ft_range(0, 2);
	test_ft_range(0, 3);
	test_ft_range(1, 1);
	test_ft_range(1, 2);
	test_ft_range(2, 2);
	test_ft_range(2, 3);
	test_ft_range(2, 4);
	test_ft_range(2, 5);
	test_ft_range(0, 42);
	test_ft_range(-42, 42);
	test_ft_range(-42, 42);
	test_ft_range(-2147483648, -2147483647);
	test_ft_range(2147483646, 2147483647);
}
