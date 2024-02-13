#include <stdio.h>

int main(void)
{
    int ary[5];
    int i;

    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    printf("ary[3]의 값을 지정해주세요 : ");
    scanf("%d",&ary[3]);
    ary[4] = ary[0] * ary[1];

    for(i=0; i<5; i++)
    {
        printf("ary[%d] = %d\n", i, ary[i]);
    }

    return 0;
}