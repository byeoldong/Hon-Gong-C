#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;

    res = (a > b)? a : b; // 조건 연산자

    printf("max = %d\n",res);

    return 0;
}