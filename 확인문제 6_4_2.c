#include <stdio.h>

int main(void)
{
    int num1, num2, res;
    char op;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &op, &num2); // 한 문장내에서 여러 문자 scan 가능 ()
   

    switch(op)
    {
        case '+': res = num1 + num2; break; // 특정 값으로 문자 사용 가능.
        case '-': res = num1 - num2; break;
        case '*': res = num1 * num2; break;
        default: res = num1 / num2; break;
    }

    printf("%d %c %d = %d", num1, op, num2, res);

    return 0;
}
