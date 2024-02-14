#include <stdio.h>

int main(void)
{
    char animal[5][20];
    int i;
    int count;

    count = sizeof(animal) / sizeof(animal[0]);
    printf("다섯가지 동물을 입력하세요: ");
    for(i=0; i<count; i++)
    {
        scanf("%s",animal[i]);
    }

    for(i=0; i<count; i++)
    {
        printf("%s  ",animal[i]);
    }

    return 0;
}