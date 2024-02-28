#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pi;
    double *pd;

    pi = (int *)malloc(sizeof(int)); //그 크기만큼의 위치의 주소를 void 포인터로 반환해줌. 따라서 내가 쓸 공간으로 형변환 필수
    if(pi == NULL)
    {
        printf("# 메모리가 부족합니다.\n");
        exit(1); // heap 공간에 연속된 자리가 부족하면 0포인터 반환.
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으로 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %.1lf\n", *pd);

    free(pi); //자리 반환
    free(pd);

    return 0;
}