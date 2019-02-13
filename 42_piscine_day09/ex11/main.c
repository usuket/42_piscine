#include <stdio.h>

#include "ft_perso.h"

int main() {
	t_perso donnie;
	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	(void) donnie;

	printf("%s\n",donnie.name);
	printf("%d\n",donnie.age);
	printf("%d\n",donnie.profession);

	return (0);
}