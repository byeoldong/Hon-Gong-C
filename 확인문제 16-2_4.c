#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, cnt = 0;
    int i, j;
    printf("> 양수 입력 : ");
    scanf("%d", &num);
    int* prime_num = (int *)calloc(num , sizeof(int));

    for(i=2; i<=num; i++)
    {
        if(i==2) prime_num[i-2] = i;
        {
            for(j=2; j<num; j++)
            {
                if(i%j==0) 
                {
                    break;
                }
                else if(j == i-1)
                {
                    prime_num[i-2] = i;
                }
            }
        }
    }

    for(i=0; i<num-2; i++)
    {
        if(prime_num[i] == 0)
        {
            printf("%5c",'X');
            cnt++;
        }
        else
        {
            printf("%5d",prime_num[i]);
            cnt++;
        }
        if(cnt%5==0) printf("\n");
    }

    free(prime_num);

    return 0;

}