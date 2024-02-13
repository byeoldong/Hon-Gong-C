#include <stdio.h>

int main(void)
{
    int a = 1;

    do
    {
        a *= 2;
    } while( a < 10 ); // 마지막에 세미콜론 꼭 붙여줘야됨.
    printf("a : %d\n",a);

    return 0;
}
