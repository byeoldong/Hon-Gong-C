#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int num;
    char name[20];
    int kor, eng, mat;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student *pary);
void calc_data(Student *pary);
void sort_data(Student *pary);
void print_data(Student *pary);

int main(void)
{
    Student ary[5];

    input_data(ary);
    calc_data(ary);

    printf("# 정렬 전 데이터...\n");
    print_data(ary);
    sort_data(ary);
    printf("\n# 정렬 후 데이터...\n");
    print_data(ary);

    return 0;
}

void input_data(Student *pary)
{
    int i;
    
    for(i=0; i<5; i++)
    {
        printf("학번 : ");
        scanf("%d",&pary[i].num);
        printf("이름 : ");
        scanf("%s",pary[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d%d%d",&pary[i].kor, &pary[i].eng, &pary[i].mat);
    }
}

void calc_data(Student *pary)
{
    int i;

    for(i=0; i<5; i++)
    {
        pary[i].tot = pary[i].kor + pary[i].eng + pary[i].mat;
        pary[i].avg = pary[i].tot / 3.0;
        if(pary[i].avg >= 90) pary[i].grade = 'A';
        else if(pary[i].avg >= 80) pary[i].grade = 'B';
        else if(pary[i].avg >= 70) pary[i].grade = 'C';
        else pary[i].grade = 'F';
    }
}

void print_data(Student *pary)
{
    int i;

    for(i=0; i<5; i++)
    {
        printf("%5d%5s%5d%5d%5d%5d%5.1lf%5c\n",pary[i].num,pary[i].name,pary[i].kor,pary[i].eng,pary[i].mat,pary[i].tot,pary[i].avg,pary[i].grade);
    }
}

void sort_data(Student *pary) //선택정렬 방식 [ 처음을 가장 크다고 가정 후 상호 옆이랑 비교 ]
{
    int i,j;
    int max;
    Student temp;

    for(i=0; i<4; i++)
    {
        max = i;
        for(j=i+1; j<5; j++)
        {
            if(pary[max].tot < pary[j].tot) max = j;
            else if(pary[max].tot == pary[j].tot)
            {
                if(pary[max].num > pary[j].num) max = j;
            }
        }
        if(max != i)
        {
            temp = pary[i];
            pary[i] = pary[max];
            pary[max] = temp;
        }
    }

}