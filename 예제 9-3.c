#include <stdio.h>

int main(void)
{
    int a, b, tot;
    double avg;
    int *pa, *pb, *p_tot;
    double *p_avg;

    pa = &a;
    pb = &b;
    p_tot = &tot;
    p_avg = &avg;

    printf("a의 값을 입력하세요 : ");
    scanf("%d",pa);
    printf("b의 값을 입력하세요 : ");
    scanf("%d",pb);

    *p_tot = *pa + *pb;
    *p_avg = *p_tot / 2.0;

    printf("a : %d, b : %d\n",*pa,*pb);
    printf("tot : %d\n", *p_tot);
    printf("avg : %.1lf\n", *p_avg);

    return 0;
}