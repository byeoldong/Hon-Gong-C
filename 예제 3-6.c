#include <stdio.h>

int main(void)
{
    char fruit[11] = "strawberry"; // nul 문자가 문자열 마지막에 추가되므로 한자리 크게 배열 선언

    printf("딸기 : %s\n", fruit);
    printf("딸기잼 : %s %s\n",fruit, "jam");

    return 0;
}