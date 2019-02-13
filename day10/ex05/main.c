#include <stdio.h>
#include <stdlib.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		check_sort(int a, int b)
{
	return (a - b);
}

int		main(void) {
	int tab[] = {1, 2, 3, 4, 5};
	printf("%d\n", ft_is_sort(tab, 5, &check_sort));

	int tab2[] = {0, 0, 2, 4, 6};
	printf("%d\n", ft_is_sort(tab2, 5, &check_sort));

	int tab3[] = {0, 0, 0, 0, 0};
	printf("%d\n", ft_is_sort(tab3, 5, &check_sort));

	int tab4[] = {0, 0};
	printf("%d\n", ft_is_sort(tab4, 2, &check_sort));

	int tab5[] = {0};
	printf("%d\n", ft_is_sort(tab5, 1, &check_sort));

	int tab051[] = {0, 3, 4, 4, 5};
	printf("%d\n", ft_is_sort(tab051, 5, &check_sort));

	int tab052[] = {0, 0, 1, 1, 2};
	printf("%d\n", ft_is_sort(tab052, 5, &check_sort));

	int tab9[] = {-3, -2, 0, 1, 2};
	printf("%d\n", ft_is_sort(tab9, 5, &check_sort));

	int tab10[] = {-3, -3, 0, 0, 0};
	printf("%d\n", ft_is_sort(tab10, 5, &check_sort));

	printf("NOT SORTED\n");

	int tab6[] = {0, 3, 2, 1, 0};
	printf("%d\n", ft_is_sort(tab6, 5, &check_sort));

	int tab7[] = {0, 3, 4, 4, 3};
	printf("%d\n", ft_is_sort(tab7, 5, &check_sort));

	int tab8[] = {5, 4, 3, 2, 1};
	printf("%d\n", ft_is_sort(tab8, 5, &check_sort));

	return (0);
}