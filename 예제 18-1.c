#include <stdio.h>

int main(void)
{
    FILE *fp; //FILE구조체의 시작 주소값을 받아줄 포인터 (FILE: 파일의 중요한 부수적인 정보들 및 입 출력 버퍼의 주소를 가지고 있는 구조체)

    fp = fopen("a.txt", "r"); //directory 설정 가능 C//data//a.txt 이 파일이 실행되는 디렉토리 안에 있어야 읽을 수 있다.
    if(fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    printf("파일이 열렸습니다.\n");
    fclose(fp);

    return 0;
}