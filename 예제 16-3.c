#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    int size = 5;
    int count = 0;
    int num;
    int i;

    pi = (int *)calloc(size, sizeof(int)); // 5개짜리 int형 변수의 자리를 0으로 초기화해서 할당
    while(1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d",&num);
        if(num <= 0) break;
        if(count == size)
        {
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int)); //늘려진 전체 크기를 입력해야됨!!
        }
        pi[count++] = num; //후위 연산 -> 원래 거 먼저 사용된 후 증가
    }
    for(i=0; i<count; i++)
    {
        printf("%5d", pi[i]);
    }
    free(pi);

    return 0;
}