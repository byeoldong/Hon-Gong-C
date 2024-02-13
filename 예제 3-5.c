#include <stdio.h>

int main (void)
{
    float ft = 1.234567f;
    double db = 1.23456789012345;

    printf("float형 변수의 값 : %.20f\n", ft);
    printf("double형 변수의 값 : %.20lf\n", db);

    return 0;
}