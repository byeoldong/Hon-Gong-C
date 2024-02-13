#include <stdio.h>

int main(void)
{
    int a = 10;
    double b = 3.4;
    char c = 'a'; // char 변수의 크기는 1, 문자 상수의 크기는 4 -> 아스키 코드 값으로 저장해서 다루기 때문에 정수형

    printf("int형 변수의 크기 : %d\n", sizeof(a));
    printf("double형 변수의 크기 : %d\n",sizeof(b));
    printf("정수형 상수의 크기 : %d\n",sizeof(10));
    printf("수식의 결괏값 크기 : %d\n",sizeof(1.5 + 3.4));
    printf("문자열의 크기 : %d\n", sizeof("A"));
    printf("문자 상수의 크기 : %d\n", sizeof('A'));
    printf("문자의 크기 : %d\n", sizeof(c));

    return 0;

}