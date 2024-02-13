#include <stdio.h>

int main(void)
{
    int a = 10; //00001010
    int b = 12; //00001100

    printf("a & b : %d\n", a & b); // 00001000
    printf("a ^ b : %d\n", a ^ b); // 00000110
    printf("a | b : %d\n", a | b); // 00001110
    printf("~a : %d\n", ~a); // 11110101
    printf("a << 1 : %d\n", a << 1); // 00010100
    printf("a >> 2 : %d\n", a >> 2); // 00000010

    return 0;
}