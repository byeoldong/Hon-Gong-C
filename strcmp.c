#include <stdio.h>

int my_strcmp(char *pa, char *pb);

int main(void)
{
    char str1[80];
    char str2[80];

    printf("두 단어를 입력하세요 : ");
    scanf("%s%s",str1, str2);

    if(my_strcmp(str1,str2) > 0) printf("%s가 %s보다 사전에 나중에 등록되어 있습니다.", str1, str2);
    else if(my_strcmp(str1,str2) < 0) printf("%s가 %s보다 사전에 나중에 등록되어 있습니다.", str2, str1);
    else printf("%s와 %s는 같은 단어입니다.",str1, str2);

    return 0;
}

int my_strcmp(char *pa, char *pb)
{
    while((*pa == *pb) && (*pa != '\0')) 
    {
        pa++;
        pb++;
    }

    if(*pa > *pb) return 1;
    else if(*pa < *pb) return -1;
    else return 0;
}