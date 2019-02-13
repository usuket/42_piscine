#include <stdlib.h>
#include <stdio.h>
void	ft_sort_wordtab(char **tab);

int main(int argc, char **argv)
{
	ft_sort_wordtab(argv);

	for (int i = 1; i < argc; ++i) {
		printf("%s\n",argv[i]);
	}
	return (0);
}