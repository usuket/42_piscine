#include <stdio.h>
#include "ft_ultimate_ft.c"

int	main(void)
{
	int	nbr;
	int	*nbr_ptr1;
	int	**nbr_ptr2;
	int	***nbr_ptr3;
	int	****nbr_ptr4;
	int	*****nbr_ptr5;
	int	******nbr_ptr6;
	int	*******nbr_ptr7;
	int	********nbr_ptr8;
	int	*********nbr_ptr9;

	nbr = 0;
	printf("nbr:%d\n", nbr);
	nbr_ptr1 = &nbr;
	nbr_ptr2 = &nbr_ptr1;
	nbr_ptr3 = &nbr_ptr2;
	nbr_ptr4 = &nbr_ptr3;
	nbr_ptr5 = &nbr_ptr4;
	nbr_ptr6 = &nbr_ptr5;
	nbr_ptr7 = &nbr_ptr6;
	nbr_ptr8 = &nbr_ptr7;
	nbr_ptr9 = &nbr_ptr8;
	ft_ultimate_ft(nbr_ptr9);
	printf("nbr:%d\n", nbr);
	return (0);
}
