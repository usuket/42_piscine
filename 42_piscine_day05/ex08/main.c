#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);
int     main(void)
{
	// cant over ride literal string
	// cant *t01 = "ad";
	char t01[] = "ad";
	printf("%s\n",ft_strupcase(t01));

	char t02[] = "this is 42 Day_05 Exercise 08 \t ALL CHARACTER mast be upper case.";
	printf("%s\n",ft_strupcase(t02));

	return (0);
}