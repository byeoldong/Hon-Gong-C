#include <stdio.h>

int main(void)
{
    int a = 10, b = 30;
    const int *const pa = &a; // pa를 간접참조하여 값을 바꾸기 불가능 -> *pa = 15; (x) , a = 15;(o) pa가 가르키는 주소는 대입으로 바꿀 수 있음. 
    /* 하지만 const를 *뒤에 적어주면 주소값을 바꿀 수 없게 된다. 따라서 초기화를 해주어야 한다.
    */

    printf("변수 a의 주소 값 : %u\n", pa);
    printf("변수 b의 주소 값 : %u\n", &b);
    printf("변수 a의 바뀐 주소 값 : %u\n", pa);

    return 0;
}