#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열 : %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    int ch;
    int i = 0;

    ch = getchar(); //버퍼에 저장되어 있는 문자열의 첫번째 저장
    while((ch != '\n') && ( i < size -1 ))
    {
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';
}