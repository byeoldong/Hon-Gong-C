#include <stdio.h>

int main(void)
{
    int a;
    int *pa; // 포인터 선언 ( 참조 연산자 아님 !! )

    pa = &a; // 포인터에 a 주소 입력
    *pa = 10; // 간접 참조 연산자로 a에 10 대입.

    printf("포인터로 a 값 출력 : %d\n", *pa); // * 참조 연산자 
    printf("변수명으로 a 값 출력 : %d\n", a);

    return 0;
}