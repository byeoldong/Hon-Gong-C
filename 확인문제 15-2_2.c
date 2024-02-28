#include <stdio.h>

int main(void)
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    void *vp = ary;

    printf("%d\n", ((int *)vp)[2]); //연산 순서를 위해 괄호 잘 쓰기.

    return 0;
}