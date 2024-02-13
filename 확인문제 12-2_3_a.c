#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    char res_str[80];
    char *star = "**********";
    int len;

    printf("단어 입력 : ");
    scanf("%s",str);
    len = strlen(str);
    while(len > 15)
    {
        printf("글자수가 15를 초과했습니다!\n");
        printf("단어 입력 : ");
        scanf("%s",str);
        len = strlen(str);
    }

    if(len <= 5)
    {
        strcpy(res_str, str);
    }
    else
    {
        strncpy(res_str,str,5);
        res_str[5] = '\0'; // strncpy는 null문자 직접 추가해야됨.
        strncat(res_str, star, len - 5);
    }

    printf("입력한 단어 : %s, 생략한 단어 : %s\n", str, res_str);

    return 0;
}