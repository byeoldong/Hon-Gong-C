#include <stdio.h>
int main(void)
{
    int ary[5][6];
    int i,j;
    int sum;

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            ary[i][j] = 5*i + 1 + j;
        }
    }

    for(i=0; i<4; i++)
    {
        sum = 0;
        for(j=0; j<5; j++)
        {
            sum += ary[i][j];
        }
        ary[i][5] = sum;
    }

    for(j=0; j<5; j++)
    {
        sum = 0;
        for(i=0; i<4; i++)
        {
            sum += ary[i][j];
        }
        ary[4][j] = sum;
    }
    sum = 0;
    
    for(i=1; i<=20; i++)
    {
        sum += i;
    }

    ary[4][5] = sum;

    for(i=0; i<5; i++)
    {
        for(j=0; j<6; j++)
        {
            printf("%5d",ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}