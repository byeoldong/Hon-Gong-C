#include <stdio.h>

int main(void)
{
    int num;
    char grade; // 아스키 코드 값 범위 내라면 둘다 호환 가능, but 자료형 일치하는 것은 습관처럼.

    printf("학번 입력 : ");
    scanf("%d", &num);
    while(getchar() != '\n'); // 버퍼에서 num에 저장되어 있는 거 빼고 다 지우기
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c", num, grade);

    return 0;
}