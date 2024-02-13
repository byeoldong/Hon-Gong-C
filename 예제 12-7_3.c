#include <stdio.h>

void my_gets(char *ps);

int main(void)
{
    char str[20];

    printf("문자열을 입력하세요 : ");
    gets(str);
    puts(str);

    return 0;

}

void my_gets(char *ps)
{
    char ch;

    while((ch = getchar()) != '\n')
    {

        *ps = ch;
        ps++;
    
    }

    *ps = '\0';
}