#include <stdio.h>

int main(void)
{
    int ch;

    while(1)
    {
        ch = fgetc(stdin); //stdin은 기본적으로 제공되는 스트림 파일 구조체의 주소!! 
        if(ch == EOF)
        {
            break;
        }
        fputc(ch, stdout);
    }

    return 0;
}