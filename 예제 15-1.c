#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pa = &a;
    int **ppa = &pa;

    printf("----------------------------------------------------\n");
    printf("변수     변숫값     &연산     *연산     **연산\n");
    printf("----------------------------------------------------\n");
    printf("  a%12d%12u\n", a, &a);
    printf(" pa%12u%12u%12d\n", pa, &pa, *pa);
    printf("ppa%12u%12u%12u%12u\n", ppa, &ppa, *ppa, **ppa);
    printf("----------------------------------------------------\n");

    return 0;
}