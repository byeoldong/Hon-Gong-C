#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
    int tot;
    double avg;
    char score;
} Score;

void line_up(Score *lp, Score *lup);

int main(void)
{
    Score list[5];
    Score lineup[5] = {};
    int i;

    for(i=0; i<5; i++)
    {
        printf("학번 : ");
        scanf("%d",&list[i].num);
        printf("이름 : ");
        scanf("%s",list[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d",&list[i].kor, &list[i].eng, &list[i].math);
        list[i].tot = list[i].kor + list[i].eng + list[i].math;
        list[i].avg = list[i].tot / 3.0;
        if(list[i].avg >= 90) list[i].score = 'A';
        else if(list[i].avg >= 80) list[i].score = 'B';
        else if(list[i].avg >= 70) list[i].score = 'C';
        else list[i].score = 'F';
    }

    printf("# 정렬 전 데이터...\n");
    for(i=0; i<5; i++)
    {
        printf("%5d%5s%5d%5d%5d%5d%5.1lf%5c\n",list[i].num,list[i].name,list[i].kor,list[i].eng,list[i].math,list[i].tot,list[i].avg,list[i].score);
    }

    line_up(list,lineup);

    printf("# 정렬 후 데이터...\n");
    for(i=0; i<5; i++)
    {
        printf("%5d%5s%5d%5d%5d%5d%5.1lf%5c\n",lineup[i].num,lineup[i].name,lineup[i].kor,lineup[i].eng,lineup[i].math,lineup[i].tot,lineup[i].avg,lineup[i].score);
    }

    return 0;
}

void line_up(Score *lp, Score *lup)
{
    int i,j,cnt = 0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==j) j++;
            if(j==5) break;
            if(lp[i].tot < lp[j].tot) cnt++;
            else if(lp[i].tot == lp[j].tot)
            {
                if(lp[i].num > lp[j].num) cnt++;
            }
            
        }
        lup[cnt] = lp[i];
        cnt = 0;
    }
}