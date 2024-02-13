#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    printf("문장을 입력하세요: ");
    gets(str);
    char *sp, *tp;
    sp = str;
    
    while(*sp != '\0')
    {
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
        printf("%s\n", sp);
        sp = tp;
    }

    return 0;
}

/* str의 마지막이 null인 것을 고려하여 반복의 끝을 지정해주어야 한다. */