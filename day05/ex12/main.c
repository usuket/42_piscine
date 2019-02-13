#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main(void) {

    printf("\n# 0 ############\n\n");
	printf("%d\n", ft_str_is_numeric("0"));
	printf("%d\n", ft_str_is_numeric("9"));
	printf("%d\n", ft_str_is_numeric("0123"));
	printf("%d\n", ft_str_is_numeric("123"));
	printf("%d\n", ft_str_is_numeric("123456789"));
	printf("%d\n", ft_str_is_numeric("1234567890"));

    printf("\n# 1 ############\n\n");

	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("a"));
	printf("%d\n", ft_str_is_numeric("z"));
	printf("%d\n", ft_str_is_numeric("A"));
	printf("%d\n", ft_str_is_numeric("Z"));
	printf("%d\n", ft_str_is_numeric("abYZ"));
    printf("%d\n", ft_str_is_numeric("-"));
    printf("%d\n", ft_str_is_numeric("\0"));
    printf("%d\n", ft_str_is_numeric("\t"));
    printf("%d\n", ft_str_is_numeric("\\"));
    printf("%d\n", ft_str_is_numeric("_"));


    printf("%d\n", ft_str_is_numeric("ab0YZ"));

    // cant over ride literal string
    // cant *t01 = "ad";
    printf("%d\n", ft_str_is_numeric("abc Def gHy"));

    char t02[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//    char t02_expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("%d\n", ft_str_is_numeric(t02));

    return (0);
}
