#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int main(void) {

	ft_putchar('f');
	ft_putchar('t');
	ft_putchar('_');
	ft_putchar('p');
	ft_putchar('u');
	ft_putchar('t');
	ft_putchar('c');
	ft_putchar('h');
	ft_putchar('a');
	ft_putchar('r');
	ft_putchar(' ');
	ft_putchar('i');
	ft_putchar('s');
	ft_putchar(' ');
	ft_putchar('o');
	ft_putchar('k');
	ft_putchar('\n');

	int i1 = 0;
	int i2 = 42;
	printf("input %d:%d", i1, i2);
	ft_swap(&i1, &i2);
	printf("\toutput %d:%d\n", i1, i2);

	ft_putstr("ft_putstr is ok\n");

	printf("ft_strlen input:%s output:%d\n", "test", ft_strlen("test"));

	printf("ft_strcmp input:%s output:%d\n", "aaa,aab", ft_strcmp("aaa", "aab"));

	return (0);
}
