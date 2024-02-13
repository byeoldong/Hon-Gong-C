#include <stdio.h>

int main(void)
{
    int a = 20, b = 3;
    double res;

    res = ((double)a) / ((double)b); // 둘중 하나만 실수면 자동으로 형 변환 해줌 -> 기존 변수의 형을 바꾸는 것은 아니고 계산할 때 값만 바꿔서 계산
    printf("a = %d, b = %d\n", a, b);
    printf("a / b의 결과: %.1lf\n", res);

    a = (int)res;
    printf("(int) %.1lf의 결과 : %d\n", res, a); // 소수점 아래를 버림

    return 0;
}