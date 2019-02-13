#include <stdio.h>

char	*ft_rot42(char *str);

int main(void)
{
	char c1[] = "abc";
	printf("%s\n",ft_rot42(c1));

	char c2[] = "ABC";
	printf("%s\n",ft_rot42(c2));
}