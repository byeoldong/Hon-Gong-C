#include <stdio.h>
#pragma pack(push, 1) //지금까지 해온 방식 을 push에 저장했다가 pop으로 꺼내 쓴다. 바이트 얼라이먼트 안 쓰고 한 바이트 단위로 모두 붙여서 사용
typedef struct 
{
    char ch;
    int in;
} Sample1;

#pragma pack(pop)
typedef struct 
{
    char ch;
    int in;
} Sample2;

int main(void)
{
    printf("Sample1 구조체의 크기 : %d바이트\n",sizeof(Sample1));
    printf("Sample2 구조체의 크기 : %d바이트\n",sizeof(Sample2));

    return 0;
}
