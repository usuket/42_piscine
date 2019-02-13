#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(int argc, char **argv){

	if(argc != 3){
		printf("%s need 2 argv! ",argv[0]);
		return 0;
	}

	char *src_t_01 = argv[1];
	char *dup_t_01 = ft_strdup(src_t_01);
	strcpy(src_t_01, "z");
	printf("src_t_01:%s dup_t_01:%s\n",src_t_01,dup_t_01);
}
