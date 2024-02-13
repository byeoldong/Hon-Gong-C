#include <stdio.h>
#include <string.h> //string 관련된 함수를 쓸 수 있는 해더

int main(void)
{
    char str1[80] = "cat"; //문자 배열 크기느 항상 넉넉하게
    char str2[80];

    strcpy(str1, "tiger" );
    strcpy(str2, str1); // 저장될 배열, 저장할 문자열
    printf("%s, %s\n", str1, str2);

    return 0;
}