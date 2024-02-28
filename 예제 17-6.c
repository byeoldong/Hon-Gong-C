#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};

int main(void)
{
    struct score dong = { 90, 80, 70 };
    struct score *ps = &dong; // ps -> dong

    printf("국어 : %d\n",ps->kor); // (*ps).kor
    printf("영어 : %d\n",ps->eng);
    printf("수학 : %d\n",ps->math);

    return 0;
}