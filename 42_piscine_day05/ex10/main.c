#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main(void) {
    // cant over ride literal string
    // cant *t01 = "ad";
    char t01[] = "abc Def gHy";
    printf("%s\n", ft_strcapitalize(t01));

    char t02[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//    char t02_expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    printf("%s\n", ft_strcapitalize(t02));

    return (0);
}
