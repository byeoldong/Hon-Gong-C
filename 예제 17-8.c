#include <stdio.h>

struct list
{
    int num;
    struct list *next;
};

int main(void)
{
    struct list a = {10}, b = {20}, c = {30}; // 초기화 안 한 값들은 0으로 자동 초기화
    struct list *head = &a, *current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    printf("list all : \n");
    current = head;
    while(current != NULL)
    {
        printf("%d\n",current->num);
        current = current->next;
    }
    printf("\n");

    return 0;
}