#include <stdio.h>
void print_num(int num) {
	printf("%d\n", num);
}

void print_double_num(int num) {
	printf("%d\n", num * 2);
}

void ft_foreach(int *tab, int length, void(*f)(int));

int main() {
	void (*ptr) (int);

	// Switchable
	int develop = 1;
	if(develop){
		ptr = &print_double_num;
	}else{
		ptr = &print_num;
	}
	int tab[5] = {0, 1, 2, 3, 4};
	ft_foreach(tab, 5, ptr);

	// Fixed
//	int tab[5] = {0, 1, 2, 3, 4};
//	ft_foreach(tab, 5, &print_num);
}