#include <stdio.h>

int main(void)
{
    char str[5];
    char ch;
    int i = 0;
    char fstr[5];

    ch = fgetc(stdin);

    while((i < sizeof(str) - 1) && ( ch != '\n'))
    {
        str[i++] = ch;
        ch = fgetc(stdin);
    }

    if(i < sizeof(str) - 1) str[i++] = ch; //사이즈를 안 넘겼으면 그 개행문자까지 저장 // 사이즈 채웠으면 그대로
    str[i] = '\0'; 

    //fgets(fstr,sizeof(fstr),stdin);

    printf("%s입니다.",str);

    return 0;
}