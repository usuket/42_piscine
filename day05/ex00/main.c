#include <stdio.h>

void	ft_putstr(char *c);

int main(void) {
	ft_putstr("");			ft_putstr("\n\n");
	ft_putstr("a");			ft_putstr("\n\n");
	ft_putstr("ab");		ft_putstr("\n\n");
	ft_putstr("abc");		ft_putstr("\n\n");
	ft_putstr("ab\\c");		ft_putstr("\n\n");
	ft_putstr("ab\tc");		ft_putstr("\n\n");
	ft_putstr("ab\nc");		ft_putstr("\n\n");
	ft_putstr("ab\\nc");	ft_putstr("\n\n");
	ft_putstr("54");		ft_putstr("\n\n");
}
