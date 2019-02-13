#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main(void) {

    printf("\n# 0 ############\n\n");
	printf("%d\n", ft_str_is_lowercase("a"));
	printf("%d\n", ft_str_is_lowercase("z"));
	printf("%d\n", ft_str_is_lowercase("abcdefghijklmnopqrstuhwxyz"));

    printf("\n# 1 ############\n\n");
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase(" "));
	printf("%d\n", ft_str_is_lowercase("a "));
	printf("%d\n", ft_str_is_lowercase(" a"));
	printf("%d\n", ft_str_is_lowercase("a a"));
	printf("%d\n", ft_str_is_lowercase("0"));
	printf("%d\n", ft_str_is_lowercase("9"));
	printf("%d\n", ft_str_is_lowercase("0123"));
	printf("%d\n", ft_str_is_lowercase("123"));
	printf("%d\n", ft_str_is_lowercase("123456789"));
	printf("%d\n", ft_str_is_lowercase("1234567890"));
	printf("%d\n", ft_str_is_lowercase("0a"));
	printf("%d\n", ft_str_is_lowercase("a0"));
	printf("%d\n", ft_str_is_lowercase("A"));
	printf("%d\n", ft_str_is_lowercase("Z"));
	printf("%d\n", ft_str_is_lowercase("abYZ"));
    printf("%d\n", ft_str_is_lowercase("-"));
    printf("%d\n", ft_str_is_lowercase("\0"));
    printf("%d\n", ft_str_is_lowercase("\t"));
    printf("%d\n", ft_str_is_lowercase("\\"));
    printf("%d\n", ft_str_is_lowercase("_"));


    printf("%d\n", ft_str_is_lowercase("ab0YZ"));

    // cant over ride literal string
    // cant *t01 = "ad";
    printf("%d\n", ft_str_is_lowercase("abc Def gHy"));

    char t02[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//    char t02_expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("%d\n", ft_str_is_lowercase(t02));

    return (0);
}
