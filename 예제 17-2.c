#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile
{
    char name[20];
    int age;
    double height;
    char *intro;
};

int main(void)
{
    struct profile dong;

    strcpy(dong.name,"Lee Donggun");
    dong.age = 22;
    dong.height = 185.5;

    dong.intro = (char *)malloc(80);
    printf("자기소개 : ");
    gets(dong.intro);

    printf("이름 : %s\n", dong.name);
    printf("나이 : %d\n", dong.age);
    printf("키 : %.1lf\n", dong.height);
    printf("자기소개 : %s\n", dong.intro);
    free(dong.intro);

    return 0;
}
