#include <stdio.h>

int main(void)
{
    int i,j,n;
    int cnt; // count 몇번 반복했는지 반복수 계산.
    int pn; // prime number -> 소수 [가정할 때 사용할 플래그 넘버]

    printf("2 이상의 정수를 입력하세요 : ");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        pn = 1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                pn = 0;
                break;
            }
        }

        if(pn == 1)
        {
            printf("%5d",i);
            cnt++;
            if(cnt%5==0) printf("\n");
        }
    }

    return 0;
}