#include <stdio.h>

int main(void)
{
    char str[80];

    printf("문자열 입력 : ");
    gets(str); //scanf와 같은 기능이지만 공백 포함 입력한 전체 문자 scan
    puts("입력된 문자열 : "); // 끝에 \n 자동으로 들어가 있음.
    puts(str);

    return 0;
}