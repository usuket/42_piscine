#include <stdio.h>
int double_num(int num) {
	return num * 2;
}

int *ft_map(int *tab, int length, int (*f)(int));

int main() {
	int tab[5] = {1, 2, 0, 4, 5};
	int *array;
	array = ft_map(tab, 5, double_num);

	for(int i = 0; i < 5; i++)
	{
		printf("%d\n",array[i]);
	}

}