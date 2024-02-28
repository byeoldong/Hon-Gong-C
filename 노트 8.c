#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[20];

    fp = fopen("c.txt","a+");
    if(fp ==NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    printf("문자를 입력하세요: ");
    scanf("%s",str);
    fputs(str, fp);

    return 0;
}