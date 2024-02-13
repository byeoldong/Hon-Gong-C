#include <stdio.h>

void print_char(char ch, int cnt); // 반환값이 없다.

int main(void)
{
    char c;
    int num;

    printf("반복하고 싶은 문자를 입력하세요 : ");
    scanf("%c",&c);
    printf("반복하고 싶은 횟수를 입력하세요 : ");
    scanf("%d",&num);

    while(num > 10) 
    {
        printf("반복수를 10 아래로 설정해주세요!\n");
        printf("반복하고 싶은 횟수를 입력해주세요 : ");
        scanf("%d",&num);
    } // 왜 num < 10인 값을 작성해도 경고문이 한 번 더 뜨는 거지...

    print_char(c,num);

    return 0;
}

void print_char(char ch, int cnt)
{
    int i;

    for(i=0; i<cnt; i++)
    {
        printf("%c",ch);
    }

    return;
}