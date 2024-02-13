#include <stdio.h>
#include <string.h>

void swap(char *pa, char *pb);

int main(void)
{
    char str1[80], str2[80], str3[80];
    char *first, *second, *third;

    printf("세 단어 입력 : ");
    scanf("%s%s%s", str1, str2, str3);

    first = str1;
    second = str2;
    third = str3;

    if(strcmp(second,first) < 0) swap(first, second);
    if(strcmp(third,second) < 0) swap(second, third);
    if(strcmp(third,first) < 0) swap(third, first);

    printf("%s, %s, %s", first, second, third);

    return 0;
    
}

void swap(char *pa, char *pb)
{
    char *temp;

    temp = pa;
    pa = pb;
    pb = temp;

}