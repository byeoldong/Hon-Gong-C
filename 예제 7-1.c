#include <stdio.h>

int sum(int x, int y) ; // sum 한수 선언 -> 컴파일러한테 호출시 반환값의 자료형을 미리 알려줌. 선언하지 않으면 main 위에 무조건 정의해줘야됨.

int main(void)
{
    int a = 10, b = 20;
    int res;

    res = sum(a, b);
    printf("res = %d\n", res);

    return 0;
}

int sum(int x, int y)
{
    int temp; // 잠시 거쳐가는(저장하는) 변수

    temp = x + y;

    return temp; // 반환값.
}