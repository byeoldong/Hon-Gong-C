#include <stdio.h>

struct cracker
{
    int price;
    int calories;
};

int main(void)
{
    struct cracker ck;

    printf("바사삭의 가격과 열량을 입력하세요 : ");
    scanf("%d%d",&ck.price,&ck.calories);
    printf("바사사의 가격 : %d원\n바사삭의 열량 : %dkcal\n",ck.price, ck.calories);

    return 0;
}