#include <stdio.h>

int main(void)
{
    short sh = 32767;
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    printf("short형 변수 출력 : %d\n", sh);
    printf("int형 변수 출력 : %d\n", in);
    printf("long현 변수 출력 : %ld\n", ln);
    printf("long long형 변수 출력 : %lld\n", lln);
    printf("long long형의 크기 : %d바이트\n",sizeof(long long));
    printf("int형의 크기 : %d바이트\n",sizeof(int));
    printf("short형의 크기 : %d바이트\n",sizeof(short));
    printf("char형의 크기 : %d바이트\n",sizeof(char));
    printf("long형의 크기 : %d바이트\n",sizeof(long));

    return 0;


}