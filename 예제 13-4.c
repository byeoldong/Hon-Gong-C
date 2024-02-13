#include <stdio.h>

void auto_func(void);
void static_func(void);

int main(void)
{
    int i;

    printf("일반 지역 변수(auto)를 사용한 함수...\n");
    for(i=0; i<5; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)을 사용한 함수...\n");
    for(i=0; i<5; i++)
    {
        static_func();
    }

    return 0;
}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d\n",a);
}

void static_func(void)
{
    static int a; // 전역 변수처럼 자동 초기화

    a++;
    printf("%d\n",a);
}