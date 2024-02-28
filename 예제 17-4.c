#include <stdio.h>

struct student
{
    int id;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s1 = { 315, "이동숙", 2.7 },
                   s2 = { 316, "이순신", 3.7 },
                   s3 = { 317, "이동건", 4.4 };
    
    struct student max;

    max = s1;
    if(s2.grade > max.grade) max = s2;
    if(s3.grade > max.grade) max = s3;

    printf("학번 : %d\n이름 : %s\n학점 : %.1lf\n", max.id, max.name, max.grade);

    return 0;
}