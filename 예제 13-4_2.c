#include <stdio.h>

char *my_token(char *str);

int main(void)
{
    char str[80];
    printf("문장을 입력하세요: ");
    gets(str);

    char* rp;

    rp = str;
    
    while(rp = my_token(rp))
    {
        printf("%s\n", rp);
        rp = NULL;
    }

    char str2[80];
    printf("문장을 입력하세요: ");
    gets(str2);

    rp = str2;

    while(rp = my_token(rp))
    {
        printf("%s\n", rp);
        rp = NULL;
    }
    
    return 0;
}

char *my_token(char *str)
{
    static char *sp; //sp == NULL로 초기화 되어있음.
    char *tp;
    char *rp;

    if(str != NULL) sp = str;
    if(*sp == '\0') return NULL;
    
    tp = sp;
    while((*tp != ' ') && (*tp != '\0'))
    {
        tp++;
    }
    if(*tp == ' ')
    {
        *tp = '\0';
        tp ++;
    }
    rp = sp;
    sp = tp;
    

    return rp;
}