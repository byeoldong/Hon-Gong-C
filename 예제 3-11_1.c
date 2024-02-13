#include <Stdio.h>

int main(void)
{
    char ch1;

    printf("문자를 입력하세요 : "); // ENTER,SPACEBAR,TAB 모두 문자로 인식 가능.
    scanf("%c",&ch1);
    printf("%c\n",ch1);

    return 0;
}