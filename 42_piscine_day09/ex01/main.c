// Do not push

#include <stdio.h>

void ft_takes_place(int hour);

int main(void) {
	for(int i = 0; i <= 24; i++){
		printf("input:%d \t",i);
		ft_takes_place(i);
	}
	return (0);
}
