#include "ft_atoi.c"
#include <stdio.h>

int	main(void)
{
	printf("ATOI\n");

	int ret_int = 0;

	char string1[] = "abc";
	ret_int = ft_atoi(string1);
	printf("%s:%d\n\n",string1,ret_int);

	char string2[] = "123";
	ret_int  = ft_atoi(string2);
	printf("%s:%d\n\n",string2,ret_int);

//	char string2[] = "abcde";
//	char *rev_string2 = ft_strrev(string2);
//	printf("%s:%s\n\n",string2,rev_string2);
//
//	char string3[] = "ab\ncd";
//	char *rev_string3 = ft_strrev(string3);
//	printf("%s:%s\n\n",string3,rev_string3);
//
//	char string4[] = "abcdef";
//	char *rev_string4 = ft_strrev(string4);
//	printf("%s:%s\n\n",string4,rev_string4);
//
//	char string5[] = "ab\0cd";
//	char *rev_string5 = ft_strrev(string5);
//	printf("%s:%s\n\n",string5,rev_string5);
//
//	char string6[] = "";
//	char *rev_string6 = ft_strrev(string6);
//	printf("%s:%s\n\n",string6,rev_string6);

}
