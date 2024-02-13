#include <stdio.h>

void my_strcat(char *dp, char *sp);

int main(void)
{
    char str[20] = "apple";

    my_strcat(str, " pie");

    printf("%s\n", str);

    return 0;
}

void my_strcat(char *dp, char *sp)
{
    while(*dp != '\0') dp++;
    while(*sp != '\0')
    {
        *dp = *sp;
        dp++;
        sp++;
    }
    *dp = '\0';
}

