#include "ft_atoi.c"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("ATOI\n");

	int ret_int = 0;

	char string1[] = "abc";
	ret_int = ft_atoi(string1);
	int atoi_num1 = atoi(string1);
	printf("%s:%d:%d\n\n",string1,ret_int,atoi_num1 );

	char string2[] = "123";
	ret_int  = ft_atoi(string2);
	int atoi_num2 = atoi(string2);
	printf("%s:%d:%d\n\n",string2,ret_int,atoi_num2 );

	char string3[] = "0123";
	ret_int  = ft_atoi(string3);
	int atoi_num3 = atoi(string3);
	printf("%s:%d:%d\n\n",string3,ret_int,atoi_num3 );

	char string4[] = "42abc";
	ret_int  = ft_atoi(string4);
	int atoi_num4 = atoi(string4);
	printf("%s:%d:%d\n\n",string4,ret_int,atoi_num4 );

	char string5[] = "abc42";
	ret_int  = ft_atoi(string5);
	int atoi_num5 = atoi(string5);
	printf("%s:%d:%d\n\n",string5,ret_int,atoi_num5 );

	char string6[] = "abc42de";
	ret_int  = ft_atoi(string6);
	int atoi_num6 = atoi(string6);
	printf("%s:%d:%d\n\n",string5,ret_int,atoi_num6 );

}
