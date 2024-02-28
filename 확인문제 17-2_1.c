#include <stdio.h>

struct marriage
{
    char name[20];
    int age;
    char gender;
    double height;
};


typedef struct marriage Marry;

int main(void)
{
    Marry m1 = {"Harry", 22, 'm', 187.5 };
    Marry *mp = &m1;

    printf("이름 : %s\n나이 :%d\n성별 : %c\n키 : %.1lf\n", mp->name, mp->age, mp->gender, mp->height);

    return 0;
}