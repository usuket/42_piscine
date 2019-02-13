#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ft_str_is_printable(char *str);

int main(void) {

	for(int i = 0; i < 255; i++){
		if(isprint(i)){
			printf("%d: is printable \n", i);
		}
	}

	printf("\n# 0 ############\n\n");
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("A"));
	printf("%d\n", ft_str_is_printable("Z"));
	printf("%d\n", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUHWXYZ"));
	printf("%d\n", ft_str_is_printable("A\0"));
	printf("%d\n", ft_str_is_printable("0"));
	printf("%d\n", ft_str_is_printable("9"));
	printf("%d\n", ft_str_is_printable("0123"));
	printf("%d\n", ft_str_is_printable("123"));
	printf("%d\n", ft_str_is_printable("123456789"));
	printf("%d\n", ft_str_is_printable("1234567890"));
	printf("%d\n", ft_str_is_printable("0a"));
	printf("%d\n", ft_str_is_printable("a0"));
	printf("%d\n", ft_str_is_printable("abYZ"));
	printf("%d\n", ft_str_is_printable("-"));
	printf("%d\n", ft_str_is_printable("\\"));
	printf("%d\n", ft_str_is_printable("_"));
	printf("%d\n", ft_str_is_printable("ab0YZ"));
	printf("%d\n", ft_str_is_printable(" "));
	printf("%d\n", ft_str_is_printable("A "));
	printf("%d\n", ft_str_is_printable(" A"));
	printf("%d\n", ft_str_is_printable("A A"));

    printf("\n# 1 ############\n\n");
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("A\t"));
    printf("%d\n", ft_str_is_printable("\0"));
    printf("%d\n", ft_str_is_printable("\t"));

    return (0);
}
