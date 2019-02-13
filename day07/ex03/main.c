// Do not push

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int main(int argc, char **argv) {
	char *s = ft_concat_params(argc, argv);
	printf("string:%s",s);
	return (0);
}
