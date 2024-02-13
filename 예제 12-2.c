#include <stdio.h>

int main(void)
{
    char *dessert = "apple"; // apple을 따로 저장해두고 그 시작 주소값을 포인터에 저장

    printf("오늘 후식은 %s입니다.\n",dessert);
    dessert = "banana"; //banana를 따로 저장해두고 그 시작 주소값을 포인터에 저장
    printf("내일 후식은 %s입니다.\n", dessert);

    return 0;
}