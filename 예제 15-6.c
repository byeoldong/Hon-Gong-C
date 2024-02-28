#include <stdio.h>

void print_ary(int (*pa)[4]); //int[4]형 배열 포인터 / 1차원 배열에서는 배열 포인터 필요없음.

int main(void)
{
    int ary[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    print_ary(ary); 
    
    return 0;
}

void print_ary(int (*pa)[4])
{
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}