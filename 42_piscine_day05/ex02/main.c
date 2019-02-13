#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int     main(void)
{
	char *inputs[17] = {
			"-2147483647", "2147483647",
			"-2147483648", "2147483648",
			"-9999999999", "9999999999",
			"0", "123hello", "hello123",
			"abc123def", "123abc456",
			"01234", "+1", "+abc", "-abc", "- 15",
			"-0152"
	};
	int i = 0;
	printf("TESTS:\n");
	while (i < 17)
	{
		int a = atoi(inputs[i]);
		int b = ft_atoi(inputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12d - %12d - %s\x1B[0m\n", i, inputs[i], a, b, test);
		i++;
	}
	return (0);
}
