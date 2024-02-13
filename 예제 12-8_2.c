#include <stdio.h>

char * my_strcpy(char *pa, const char *sp);

int main(void)
{
    char str1[80] = "apple";
    char str2[80] = "strawberry";

    printf("%s\n", my_strcpy(str1, str2));

    return 0;
}

char * my_strcpy(char *pa, const char *sp)
{
    char *str = pa;

    while(*sp != '\0')
    {
        *pa = *sp;
        pa++;
        sp++;
    }

    *pa = '\0';

    return str;
}