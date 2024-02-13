#include <Stdio.h>

int main(void)
{
    int a,b;
    int sum, sub, mul, inv, div_1;
    double c,d;
    double div_2;
    int rem;

    a = 35;
    b = 10;
    c = 5.0;
    d = 2.0;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    inv = -a;
    div_1 = a / b;
    div_2 = c / d;
    rem = a % b;
    
    printf("a의 값은 : %d, b의 값은 : %d\n",a,b);
    printf("c의 값은 : %.1lf, d의 값은 : %.1lf\n",c,d);
    printf("a와 b의 합은 : %d\n", sum);
    printf("a와 b의 차는 : %d\n", sub);
    printf("a와 b의 곱은 : %d\n", mul);
    printf("a의 음수 연산 : %d\n", inv);
    printf("a와 b의 나눈 후 몫 : %d\n", div_1);
    printf("a와 b의 나눈 후 나머지 : %d\n", rem);
    printf("c와 d의 나누기 : %.2lf\n", div_2);

    return 0;

}