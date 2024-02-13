#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for(i=1; i<=10; i++)
    {
        sum += i;
        if(sum>30) break;
    }

    printf("sum은 %d이고 그때의 i값은 %d입니다.", sum, i);

    return 0;
}