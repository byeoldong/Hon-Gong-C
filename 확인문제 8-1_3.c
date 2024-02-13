#include <stdio.h>

int main(void)
{
    int A[3] = { 1,2,3 };
    int B[10];
    int i;

    for(i=0; i<10; i++)
    {
        B[i] = A[i%3]; // 나머지 연산자 사용..호호
    }

    for(i=0; i<10; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}