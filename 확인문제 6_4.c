#include <stdio.h>

int main(void)
{
    int a,b;
    char cal;
    int res;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d",&a,&cal,&b);

    if(cal == '+')
    {
        res = a + b;
    }
    else if(cal == '-')
    {
        res = a - b;
    }
    else if(cal == '*')
    {
        res = a * b;
    }
    else
    {
        res = a / b;
    }

    printf("%d%c%d = %d\n",a,cal,b,res);

    return 0;
}