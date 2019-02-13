#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int main(void) {

    printf("\n# 0 ############\n\n");

    printf("%d\n", ft_str_is_alpha("a"));
    printf("%d\n", ft_str_is_alpha("z"));
    printf("%d\n", ft_str_is_alpha("A"));
    printf("%d\n", ft_str_is_alpha("Z"));
    printf("%d\n", ft_str_is_alpha("abYZ"));

    printf("\n# 1 ############\n\n");

    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("0"));
    printf("%d\n", ft_str_is_alpha("999"));
    printf("%d\n", ft_str_is_alpha("-"));
    printf("%d\n", ft_str_is_alpha("\0"));
    printf("%d\n", ft_str_is_alpha("\t"));
    printf("%d\n", ft_str_is_alpha("\\"));
    printf("%d\n", ft_str_is_alpha("_"));


    printf("%d\n", ft_str_is_alpha("ab0YZ"));

    // cant over ride literal string
    // cant *t01 = "ad";
    printf("%d\n", ft_str_is_alpha("abc Def gHy"));

    char t02[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//    char t02_expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("%d\n", ft_str_is_alpha(t02));

    return (0);
}
