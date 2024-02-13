#include <stdio.h>

int main(void)
{
    int hour, min, sec;
    double time = 3.76;

    hour = (int) time; // 실수의 정수부분만 추출하기
    time -= hour; // 소수부분 구하기
    time *= 60;
    min = (int) time;
    time -= min;
    time *= 60;
    sec = (int) time;
    printf("3.76시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

    return 0;

}