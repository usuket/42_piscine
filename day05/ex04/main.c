#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void) {

	char dest_t1_1[] = "z";
	char dest_t1_2[] = "z";
	char *expected_t1 = strncpy(dest_t1_1, "", 1);
	char *actual_t1 = ft_strncpy(dest_t1_2, "", 1);
	printf("%s:%s\n",expected_t1, actual_t1);

	char dest2_1[] = "zz";
	char dest2_2[] = "zz";
	char *expected2 = strncpy(dest2_1, "ab", 1);
	char *actual2 = ft_strncpy(dest2_2, "ab", 1);
	printf("%s:%s\n",expected2, actual2);

	char dest3_1[] = "zzz";
	char dest3_2[] = "zzz";
	char *expected3 = strncpy(dest3_1, "ab", 2);
	char *actual3 = ft_strncpy(dest3_2, "ab", 2);
	printf("%s:%s\n",expected3, actual3);

	char dest4_1[] = "zzz";
	char dest4_2[] = "zzz";
	char *expected4 = strncpy(dest4_1, "a", 1);
	char *actual4 = ft_strncpy(dest4_2, "a", 1);
	printf("%s:%s\n", expected4, actual4);

	char dest5_1[] = "zzz";
	char dest5_2[] = "zzz";
	char *expected5 = strncpy(dest5_1, "", 0);
	char *actual5 = ft_strncpy(dest5_2, "", 0);
	printf("%s:%s\n", expected5, actual5);

	char dest_t6_1[] = "zzz";
	char dest_t6_2[] = "zzz";
	char *expected_t6 = strncpy(dest_t6_1, "a\tb", 3);
	char *actual_t6 = ft_strncpy(dest_t6_2, "a\tb", 3);
	printf("%s:%s\n", expected_t6, actual_t6);

	char dest_t7_1[] = "zzz";
	char dest_t7_2[] = "zzz";
	char *expected_t7 = strncpy(dest_t7_1, "a\0b", 3);
	char *actual_t7 = ft_strncpy(dest_t7_2, "a\0b", 3);
	printf("%s:%s\n", expected_t7, actual_t7);

	char dest_t8_1[] = "zzzzzzzzzz";
	char dest_t8_2[] = "zzzzzzzzzz";
	char *expected_t8 = strncpy(dest_t8_1, "12345", 3);
	char *actual_t8 = ft_strncpy(dest_t8_2, "12345", 3);
	printf("%s:%s\n",expected_t8, actual_t8);

	char dest_t81_1[] = "zzzzzzzzzz";
	char dest_t81_2[] = "zzzzzzzzzz";
	char *expected_t81 = strncpy(dest_t81_1, "12345", 8);
	char *actual_t81 = ft_strncpy(dest_t81_2, "12345", 8);
	printf("%s:%s\n",expected_t81, actual_t81);
}
