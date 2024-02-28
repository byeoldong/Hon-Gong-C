#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char **matrix = (char **)malloc(3 * sizeof(char *));
    int i;
    char str[80];

    for(i=0; i<3; i++)
    {
        printf("문자열을 입력하세요: ");
        gets(str);
        matrix[i] = (char *)malloc(strlen(str) + 1);
        strcpy(matrix[i], str);
    }

    for(i=0; i<3; i++)
    {
        printf("%s\n", matrix[i]);
    }

    for(i=0; i<3; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;


}

   