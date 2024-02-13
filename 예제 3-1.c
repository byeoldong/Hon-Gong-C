#include <stdio.h>

int main(void)
{
    int a;
    int b,c;
    double da;
    float d;
    char ch;

    a = 10;
    b = a;
    c = a + 20;
    da = 3.5;
    d = 3.14;
    ch = 'C';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 d의 값 : %.2f\n", d);
    printf("변수 ch의 값 : %c\n", ch);

    return 0;
}