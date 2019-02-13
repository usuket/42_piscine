#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);
int     main(void)
{
    printf("%s:%s\n", strstr("abcde","a"),ft_strstr("abcde","a"));
    printf("%s:%s\n", strstr("abcde",""),ft_strstr("abcde",""));
    printf("%s:%s\n", strstr("abcde","\0"),ft_strstr("abcde","\0"));
    printf("%s:%s\n", strstr("abcde","b"),ft_strstr("abcde","b"));
    printf("%s:%s\n", strstr("abcde","cd"),ft_strstr("abcde","cd"));
    printf("%s:%s\n", strstr("abcde","cde"),ft_strstr("abcde","cde"));
    printf("%s:%s\n", strstr("abcde","cdefg"),ft_strstr("abcde","cdefg"));
    printf("%s:%s\n", strstr("abcde","cdefgh"),ft_strstr("abcde","cdefgh"));

//    if(!strstr("abcde","cdef"))
//        printf("strstr NULL\n");

    char test_02_s1[] = "abcde";
    char test_02_s2[] = "cdef";
    char *test_02 = ft_strstr(test_02_s1,test_02_s2);
    if(!test_02)
        printf("ft_strstr NULL\n");

    return (0);
}
