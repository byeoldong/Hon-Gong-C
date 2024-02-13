#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];

    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin ); // 문자열, 문자열크기, 입력버퍼
    str[strlen(str) - 1] = '\0'; //strlen은 null 문자 이전까지 문자수를 구해줌.
    printf("입력된 문자열은 %s입니다\n", str);

    return 0;
}