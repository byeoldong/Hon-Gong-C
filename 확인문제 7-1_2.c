#include <stdio.h>

double centi_to_meter( double x );

int main(void)
{
    double height, res;

    printf("키(cm)를 입력하세요 : ");
    scanf("%lf", &height);

    res = centi_to_meter(height);

    printf("당신의 키는 %.2lfm입니다.",res);

    return 0;
}

double centi_to_meter(double x)
{
    double temp;

    temp = x / (double) 100 ;

    return temp;
}