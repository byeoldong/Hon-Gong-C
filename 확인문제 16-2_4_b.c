#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, cnt = 0;
    int i, j;

    printf("양수 입력 : ");
    scanf("%d", &num);
    int *prime_num = (int *)calloc(num-2, sizeof(int));

    if(prime_num == NULL)
    {
        printf("메모리가 부족합니다.");
        exit(1);
    }

    if(num==2) printf("%5d",2);
    else
    {
        prime_num[0] = 2;
        for(i=2; i<=num; i++)
        {
            for(j=2; j<i; j++)
            {
                if(i % j == 0) break;
                else if(j == i - 1) prime_num[i-2] = i;
            }
        }
    }

    for(i=0; i<num-2; i++)
    {
        if(prime_num[i] == 0)
        {
            printf("%5c", 'X');
        }
        else
        {
            printf("%5d",prime_num[i]);
        }
        cnt++;
        if(cnt % 5 == 0) printf("\n");
    }

    free(prime_num);

    return 0;
}

    

