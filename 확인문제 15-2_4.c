#include <stdio.h>

void swap(char ch[20], void *pa, void *pb);

int main(void)
{
    int age1, age2;
    double height1, height2;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf",&age1, &height1);
    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf",&age2, &height2);

    swap("int", &age1, &age2);
    swap("double", &height1, &height2);

    printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, height1);
    printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", age2, height2);
    
     return 0;
}

void swap(char ch[20], void *pa, void *pb)
{
    int i_t;
    double d_t;

    if(ch == "int")
    {
        i_t = *(int *)pa;
        *(int *)pa = *(int *)pb;
        *(int *)pb = i_t;
    }
    else
    {
        d_t = *(double *)pa;
        *(double *)pa = *(double *)pb;
        *(double *)pb = d_t;
    }
}