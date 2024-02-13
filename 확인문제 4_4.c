#include <stdio.h>

int main(void)
{
    double weight, height, bmi;

    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf("%lf%lf", &weight, &height);

    height /= 100; // 키를 m단위로 환산
    bmi = weight / ( height * height ); // C언어에는 거듭제곱 연산자가 없다.

    (bmi >= 20.0 && bmi < 25.0) ? printf("표준입니다.") : printf("체중관리가 필요합니다.");

    return 0;

}