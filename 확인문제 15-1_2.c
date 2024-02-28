#include <stdio.h>

int main(void)
{
    int a = 10, b = 20;
    int *pa = &a, *pb = &b;
    int **ppa = &pa, **ppb = &pb;
    int *pt;

    pt = *ppa; // pt = pa
    *ppa = *ppb;  // pa = pb
    *ppb = pt; // pb = pt

    printf("a:%d, b:%d\n", a, b);
    printf("*pa:%d, *pb:%d\n",*pa, *pb);

    return 0;
}