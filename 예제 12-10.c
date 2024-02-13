#include <stdio.h>
#include <String.h>

int main(void)
{
    char str[80] = "straw";

    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, " piece", 4);
    printf("%s\n", str);

    return 0;

}