#include <stdio.h>

int main(void)
{
    printf("%d\n", 12);
    printf("%d\n", 014); // 8진법
    printf("%d\n", 0xc); // 16진법

    printf("%d\n", 12);
    printf("%o\n", 12); // 8진법
    printf("%x\n", 12); // 16진법

    return 0;
}