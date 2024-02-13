#include <stdio.h>

double avg(double x, double y);

int main(void)
{
    double a = 1.5, b = 3.4;
    double res;

    res = avg(a, b);

    printf("res : %.1lf", res);

    return 0;
}

double avg(double x, double y)
{
    double temp;

    temp = ( x + y ) / 2.0; // double형으로 맞춰주기.

    return temp;
}