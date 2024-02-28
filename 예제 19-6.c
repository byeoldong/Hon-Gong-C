#include <stdio.h>
#define VER 7
#define BIT16

int main(void)
{
    int max;

#if (defined(BIT16) && VER >= 6)
     printf("버전 %d입니다\n", VER);
     max = 32767;
#else 
/*#error 컴파일러 버전은 6.0이상이어야 합니다. */
#endif

/*#ifdef BIT16
     max = 32767; // 2^15 - 1 --> short형 정수의 최댓값
#else
    max = 2147483647; //2^31 - 1 --> int 4bite형 정수의 최댓값
#endif */
     printf("int형 변수의 최댓값 : %d\n", max);

     return 0;
    

    
}