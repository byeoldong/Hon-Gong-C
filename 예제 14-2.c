#include <stdio.h>

int main(void)
{
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }
    printf("행의 개수 %5d\n",sizeof(num) / sizeof(num[0])); //전체 배열의 크기 / 첫번째 행의 크기
    printf("열의 개수 %5d\n",sizeof(num[0]) / sizeof(num[0][0])); //한 행의 크기 / 한 요소의 크기

    return 0;
}