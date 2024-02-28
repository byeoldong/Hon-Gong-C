#include <stdio.h>

struct student
{
    int num;
    double grade;
};

int main(void)
{
    struct student s1;
    
    s1.num = 2;
    printf("점수를 입력하세요 :");
    scanf("%lf",&s1.grade);

    printf("학년 : %d, 학점 : %.1lf\n", s1.num, s1.grade);

    return 0;
}