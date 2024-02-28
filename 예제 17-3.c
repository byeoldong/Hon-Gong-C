#include <stdio.h>

struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

int main(void)
{
    struct student dong;

    dong.pf.age = 22;
    dong.pf.height = 185.5;
    dong.id = 2021145117;
    dong.grade = 4.5;

    printf("나이: %d\n키: %.1lf\n학번: %d\n학점 : %.1lf\n",dong.pf.age, dong.pf.height, dong.id, dong.grade);

    return 0;
}