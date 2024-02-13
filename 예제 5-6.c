#include <stdio.h>

int main(void)
{
    int rank = 2, m = 0;

    switch (rank)
    {
        case 1: m = 300; break;
        case 2: m = 200; break;
        case 3: m = 100; break;
        default: m = 10; break;
    }

    printf("당신의 상금은 : %d원입니다.", m);

    return 0;
}