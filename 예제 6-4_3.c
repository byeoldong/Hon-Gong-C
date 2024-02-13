#include <stdio.h>

int main(void)
{
    int i, j, m, n;

    for(i=1; i<=5; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(m=5; m>0; m--)
    {
        for(n=0; n<m; n++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}