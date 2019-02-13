#include "ft_strlen.c"
#include <stdio.h>

int	main(void)
{
	char *string;
	int size = 0;

	string = "";
	size = ft_strlen(string);
	printf("%s:%d\n",string,size);

	string = "toto";
	size = ft_strlen(string);
	printf("%s:%d\n",string,size);

	string = "tototototototototototototototototototototototototototototototototototototototototo";
	size = ft_strlen(string);
	printf("%s:%d\n",string,size);

	string = "totototototototototo\0to";
	size = ft_strlen(string);
	printf("%s:%d\n",string,size);

	string = "to\nto";
	size = ft_strlen(string);
	printf("%s:%d\n",string,size);
}
