#include <stdio.h>

int main(void)
{
    int ch, max = 0, cnt = 0;

    ch = getchar();

    while(ch != EOF)
    {
        while( ch != '\n')
        {
            cnt ++;
            ch = getchar();
        }
        fflush(stdin);
        
        if(max < cnt) max = cnt;
        cnt = 0;
        ch = getchar();
    }

    printf("가장 긴 단어의 길이 : %d\n",max);

    return 0;


}