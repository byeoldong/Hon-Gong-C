#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    //fp = fopen("C:\\Users\\SAMSUNG\\Desktop\\C WORKPLACE\\Practice\\b.txt","r");
    fp = fopen("a.txt","r");
    if(fp == NULL)
    {
        printf("파일이 열리지 않았습니다.");
        return 1; //exit(1)
    }

    while(1)
    {
        ch = fgetc(fp);
        if( ch == EOF ) break;
        putchar(ch);
    }
    fclose(fp);

    return 0;
}