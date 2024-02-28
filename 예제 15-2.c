#include <stdio.h>
void swap_ptr(char **ppa, char **ppb);
void swap(char *pa, char *pb);

int main(void)
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *pt;

    pt = *ppa; //pa
    *ppa = *ppb; //pb
    *ppb = pt;
}

/* 포인터도 함수 내에서 그냥 선언하면 지역변수로 사용된다. 그 내부에 있는 값을 바꾸려면 이중 포인터가 필요하다. */