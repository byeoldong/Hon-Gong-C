#include <stdio.h>

int main(void)
{
    int ch;

    ch = getchar(); // scan한 것을 int형으로 저장함
    printf("입력한 문자 : ");
    putchar(ch);

    return 0;
}