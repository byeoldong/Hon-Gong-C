#include <stdio.h>

int get_pos(void);

int main(void)
{
    int res;

    res = get_pos();
    printf("res : %d\n", res);

    return 0;
}

int get_pos(void)
{
    int num;
    printf("양수를 입력하세요 : ");
    scanf("%d", &num);

    while(num <= 0) // 예외처리!
    {
        printf("양수가 아닙니다!\n");
        printf("양수를 입력하세요 : ");
        scanf("%d",&num);
    }

    return num;
}