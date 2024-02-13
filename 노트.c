#include <stdio.h>
#include <string.h>

void swap(char *pa, char *pb);

int main(void)
{
    char str1[80], str2[80];
    char *first, *second;

    printf("두 단어 입력 : ");
    scanf("%s%s",str1, str2);

    first = str1;
    second = str2;

    printf("순서가 바뀌기 전 : %s, %s\n",first, second);

    swap(first, second);

    printf("순서가 바뀐 후 : %s, %s\n", first, second);

    return 0;
}

void swap(char *pa, char *pb)
{
    char *temp;

    temp = pa;
    pa = pb;
    pb = temp;
}