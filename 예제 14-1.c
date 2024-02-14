#include <stdio.h>

int main(void)
{
    int score[3][4];
    char name[3][15] = {"Harry","Robert","Chris"};
    int total;
    double avg;
    int i,j;

    for(i=0; i<3; i++)
    {
        printf("%s의 점수를 입력하세요\n",name[i]);
        printf("국어 | 수학 | 영어 | 과학 : ");
        for(j=0; j<4; j++)
        {
            scanf("%d",&score[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        total = 0; //변수를 여러개 설정 안 하고 하나로 설정 후 초기화해주며 사용.
        for(j=0; j<4; j++)
        {
            total += score[i][j];
        }
        avg = (double) total / 4.0;
        printf("%s의 총점은 %d점, 평균은 %.2lf점입니다.\n",name[i],total,avg);
    }

    return 0;
}