#include <stdio.h>

int my_strlen(char *ps);

int main(void)
{
    char str[30] = "strawberry";

    printf("문자열의 길이는 %d입니다. ", my_strlen(str));

    return 0;
}

int my_strlen(char *ps)
{
    int cnt = 0;
    while( *ps != '\0')
    {
        cnt++;
        ps++;
    }

    return cnt;
}