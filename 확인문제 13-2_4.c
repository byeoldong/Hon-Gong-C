#include <stdio.h>

void input_data(int *pa, int *pb);
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
    input_data(&a,&b);
    swap_data();
    print_data(a,b);

    return 0;
}

void input_data(int *pa, int *pb)
{
    printf("두 정수 입력 : ");
    scanf("%d%d",pa,pb);
}

void swap_data(void)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void print_data(int a, int b)
{
    printf("두 정수 출력 : %d, %d\n",a,b);
}

// 이것은 github에 업데이트가 되는지 확인하기 위한 주석입니다./