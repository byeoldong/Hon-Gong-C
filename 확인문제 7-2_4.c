#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int res, n;

    printf("n을 지정해주세요 : ");
    scanf("%d",&n);

    res = rec_func(n);
    printf("1부터 %d까지의 합은 : %d입니다.",n,res);

    return 0;
}

int rec_func(int n)
{
    int sum; // 매번 호출될 때마다 다른 sum이 계속 생성됨.
    
    if(n == 1) return 1;
    else 
    { sum = n + rec_func(n-1); }
    
    return sum;
}
