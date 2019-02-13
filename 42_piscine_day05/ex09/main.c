#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main(void) {
    // cant over ride literal string
    // cant *t01 = "ad";
    char t01[] = "ABC";
    printf("%s\n", ft_strlowcase(t01));

    char t02[] = "this is 42 Day_05 Exercise 09 \t ALL CHARACTER mast be lower case.";
    printf("%s\n", ft_strlowcase(t02));

    return (0);
}
