#include <stdio.h>

int main(void)
{
    int a;

    do
    {
        printf("수를 입력하세요: "); 
        scanf("%d", &a);
    } while (a < 0);
    
    printf("a : %d", a);

    return 0;

}