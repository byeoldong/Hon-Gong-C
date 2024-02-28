#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; //0,1,2,3의 정수를 기호화해서 저장

int main(void)
{
    enum season ss;
    char *pc = NULL;
    int choice;

    printf("원하는 계절을 입력하세요(0/1/2/3) : ");
    scanf("%d",&choice);
    
    ss = choice; 

    switch(ss)
    {
        case SPRING:
            pc = "inline"; break;
        case SUMMER:
            pc = "swimming"; break;
        case FALL:
            pc = "trip"; break;
        case WINTER:
            pc = "skiing"; break;
    }
    printf("나의 레저 활동 => %s\n", pc);

    return 0;
}