#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80],temp[80];
    char *ps = temp;

    printf("단어 입력 : ");
    scanf("%s", str);

    while( strlen(str) > 15 )
    {
        printf("단어 길이 초과!\n");
        printf("단어 입력 : ");
        scanf("%s", str);
    }

    if(strlen(str) > 5)
    {
        strncpy(temp,str,5);
        while(strlen(temp) < strlen(str))
        {
            strcat(temp, "*");
        }
    }
    else strcpy(temp, str);

    printf("입력한 단어 : %s, 생략한 단어 : %s",str, temp);

    return 0;


}