#include <stdio.h>

int main(void)
{
    char *pary[5] = {"apple", "pear", "peach", "banana", "melon"};
    int i,j;

    for(i=0; i<5; i++)
    {
        printf("%s\n",pary[i]);
    }

    return 0;
}