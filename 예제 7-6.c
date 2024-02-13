#include <stdio.h>

void fruit(int cnt);

int main(void)
{
    fruit(1);

    return 0;
}

void fruit(int cnt)
{
    printf("apple\n");
    if(cnt==3) return;
    fruit(cnt + 1);
    printf("jam\n"); //자기 자신을 호출할 때마다 함수의 복사본을 만들어 사용한다고 생각. 이전에 호출했던 곳으로 돌아간다.
}