#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10; //ary의 첫번째 요소의 값을 10을 지정
    *(ary + 1) = *(ary + 0) + 10; //ary[1] = ary[0] + 1

    printf("세 번째 배열 요소를 입력하세요 : ");
    scanf("%d",ary + 2);

    for(i=0; i<3; i++)
    {
        printf("%5d",*(ary + i));
    }

    return 0;
}