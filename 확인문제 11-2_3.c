#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;

    printf("문자열을 입력해주세요 : (모두 입력 후 enter을 누른 뒤 ctrl + Z를 눌러주세요)\n");
    ch = getchar();

    while( ch != EOF )
    {
        if((ch >= 'a') && ( ch <= 'z')) cnt++;
        ch = getchar();
    }

    printf("소문자의 개수 : %d\n", cnt);

    return 0;
}