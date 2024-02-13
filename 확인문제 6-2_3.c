#include <stdio.h>

int main(void)
{
    int i, j, num, count=0;

    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d", &num);


    for(i=2; i<=num; i++)
    {
        if(i==2)
        {
            printf("%5d",i);
            count++;
        }
        else
        {
            for(j=2; j<i; j++)
            {
                if(i%j==0) break;
                else if(j==i-1)
                {
                printf("%5d",i);
                count++;
                if(count%5==0) printf("\n");
                }
            }
        }
    }

    return 0;

}