#include <stdio.h>

int ft_button(int i1, int i2, int i3);

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	negative_flag;

	number = 0;
	negative_flag = 0;
	i = 0;
	if (str[i] == '-')
		negative_flag = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		number *= 10;
		number += (int)str[i] - '0';
		i++;
	}
	if (negative_flag == 1)
		return (-number);
	else
		return (number);
}

int main(int argc,char **argv)
{
	if(argc != 4){
		printf("need 3 args");
	}

	int i_1 = ft_atoi(argv[1]);
	int i_2 = ft_atoi(argv[2]);
	int i_3 = ft_atoi(argv[3]);
	int ret = ft_button(i_1, i_2,i_3);
	printf("%d",ret);
}