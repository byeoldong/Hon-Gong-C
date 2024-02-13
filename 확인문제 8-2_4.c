#include <stdio.h>
#include <ctype.h> // isupper, tolower 함수 쓰기위한 헤더

int main(void)
{
    char str[80];
    int i;
    int cnt = 0;

    printf("문장 입력 : ");
    gets(str);

    for(i=0; str[i] != '\0'; i++) //문장 끝까지라고 지정해주는 것이 정확 이후 값까지 굳이 계산하니 오차 및 오류 발생한 듯
    {
        if( isupper(str[i] )) // str[i] >= 65 && str[i] <= 90
        {
            str[i] = tolower(str[i]) ; // str[i] + 32
            cnt ++;
        }
        
    }

    printf("바뀐 문장 : %s\n", str);
    printf("바뀐 문자 수 : %d\n", cnt);

    return 0;

    
}