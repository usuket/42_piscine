#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main(void) {

    printf("\n# 0 ############\n\n");
	printf("%d\n", ft_str_is_uppercase("A"));
	printf("%d\n", ft_str_is_uppercase("Z"));
	printf("%d\n", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUHWXYZ"));
	printf("%d\n", ft_str_is_uppercase("A\0"));

    printf("\n# 1 ############\n\n");
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase(" "));
	printf("%d\n", ft_str_is_uppercase("A "));
	printf("%d\n", ft_str_is_uppercase(" A"));
	printf("%d\n", ft_str_is_uppercase("A A"));
	printf("%d\n", ft_str_is_uppercase("A\t"));
	printf("%d\n", ft_str_is_uppercase("0"));
	printf("%d\n", ft_str_is_uppercase("9"));
	printf("%d\n", ft_str_is_uppercase("0123"));
	printf("%d\n", ft_str_is_uppercase("123"));
	printf("%d\n", ft_str_is_uppercase("123456789"));
	printf("%d\n", ft_str_is_uppercase("1234567890"));
	printf("%d\n", ft_str_is_uppercase("0a"));
	printf("%d\n", ft_str_is_uppercase("a0"));
	printf("%d\n", ft_str_is_uppercase("abYZ"));
    printf("%d\n", ft_str_is_uppercase("-"));
    printf("%d\n", ft_str_is_uppercase("\0"));
    printf("%d\n", ft_str_is_uppercase("\t"));
    printf("%d\n", ft_str_is_uppercase("\\"));
    printf("%d\n", ft_str_is_uppercase("_"));


    printf("%d\n", ft_str_is_uppercase("ab0YZ"));

    // cant over ride literal string
    // cant *t01 = "ad";
    printf("%d\n", ft_str_is_uppercase("abc Def gHy"));

    char t02[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//    char t02_expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("%d\n", ft_str_is_uppercase(t02));

    return (0);
}
