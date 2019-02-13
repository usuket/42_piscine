#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int main(void) {
	ft_putnbr(-3);		ft_putchar('\n');
	ft_putnbr(-1);		ft_putchar('\n');
	ft_putnbr(0);		ft_putchar('\n');
	ft_putnbr(1);		ft_putchar('\n');
	ft_putnbr(34567);	ft_putchar('\n');

	// signed int
	signed int long_int_minimum = -2147483648;
	ft_putnbr(long_int_minimum);ft_putchar('\n');
	signed int long_int_max = 2147483647;
	ft_putnbr(long_int_max);ft_putchar('\n');
}
