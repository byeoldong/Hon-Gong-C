#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    char *res;

    printf("문자열을 입력하세요 : ");
    res = fgets(str,sizeof(str),stdin);
    str[strlen(str) - 1] = '\0';
    printf("%s\n",res);
    printf("%s",str);

    return 0;
}