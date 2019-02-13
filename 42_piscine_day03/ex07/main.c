#include "ft_strrev.c"
#include <stdio.h>

int	main(void)
{
	printf("START\n");

	char string1[] = "abc";
	char *rev_string1 = ft_strrev(string1);
	printf("%s:%s\n\n",string1,rev_string1);

	char string2[] = "abcde";
	char *rev_string2 = ft_strrev(string2);
	printf("%s:%s\n\n",string2,rev_string2);

	char string3[] = "ab\ncd";
	char *rev_string3 = ft_strrev(string3);
	printf("%s:%s\n\n",string3,rev_string3);

	char string4[] = "abcdef";
	char *rev_string4 = ft_strrev(string4);
	printf("%s:%s\n\n",string4,rev_string4);

	char string5[] = "ab\0cd";
	char *rev_string5 = ft_strrev(string5);
	printf("%s:%s\n\n",string5,rev_string5);

	char string6[] = "";
	char *rev_string6 = ft_strrev(string6);
	printf("%s:%s\n\n",string6,rev_string6);

}
