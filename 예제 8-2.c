#include <stdio.h>

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;
    int size;

    size = sizeof(score) / sizeof(score[0]) ; // bite단위로 계산되는 sizeof를 이용하여 요소개수 구하기

    for(i=0; i<size; i++)
    {
        printf("score[%d] : ",i);
        scanf("%d",&score[i]);
    }

    for(i=0; i<size; i++)
    {
        total += score[i];
    }

    avg = (double) total / (double) size ;

    printf("avg = %.1lf\n", avg);

    return 0;

}