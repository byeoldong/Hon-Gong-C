#include <stdio.h>

int main(void)
{
    int score[2][3][4] = {
       { {72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90} },
       { {66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75} }
    };

    int i, j ,k;

    int score2[2][3][4];

    for(i=0; i<2; i++)
    {
        printf("B학교 %d반의 3명의 성적을 입력해주세요\n",i+1);
        for(j=0; j<3; j++)
        {
            printf("%d번째 학생의 점수 입력\n", j+1);
            printf("국|수|영|과\n");
            for(k=0; k<4; k++)
            {
                scanf("%d",&score2[i][j][k]);
            }
        }
        printf("\n");
    }

    for(i=0; i<2; i++)
    {
        printf("A학교 %d반 점수...\n", i+1);
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
            {
                printf("%4d",score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    for(i=0; i<2; i++)
    {
        printf("B학교 %d반 점수...\n", i+1);
        for(j=0; j<3; j++)
        {
            for(k=0; k<4; k++)
            {
                printf("%4d",score2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}