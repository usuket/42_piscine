#include <stdlib.h>
#include <stdio.h>
void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

int		ft_tab_cmp(char *tab1, char *tab2)
{
	int i;

	i = 0;
	while (tab1[i] != '\0' && tab2[i] != '\0' && tab1[i] == tab2[i])
		i++;
	return (tab1[i] - tab2[i]);
}

int main(int argc, char **argv)
{
	ft_advanced_sort_wordtab(argv,&ft_tab_cmp);

	for (int i = 1; i < argc; ++i) {
		printf("%s\n",argv[i]);
	}
	return (0);
}