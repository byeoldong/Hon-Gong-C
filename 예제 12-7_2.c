#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[20];
    char ch;

    do
    {
        ch = getchar(); //글자 입력받고
        str[i] = ch; //배열에 하나씩 저장하고
        i++;
    } while (ch != '\n');

    str[--i] = '\0'; //Enter 자이에 null문자.
    printf("%s", str);

    return 0;
    
}