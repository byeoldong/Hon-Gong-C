#include <stdio.h>
#define SUM(a,b) ((a) + (b))
#define MUL(a,b) ((a) * (b)) //혼동방지를 위해 모두 괄호를 입력해준다. 모든 인수에 괄호를 달아주는 것이 좋다.

int main(void)
{
    int a = 10, b = 20;
    int x = 30, y = 40;
    int res;

    printf("a + b = %d\n", SUM (a,b));
    printf("x * y = %d\n", MUL(x,y));
    res = 30 / MUL(2,5) ;
    printf("res : %d\n", res);

    return 0;
}