#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matrix = (int **)malloc(4 * sizeof(int *));
    int i,j;

    for(i=0; i<4; i++)
    {
        matrix[i] = (int *)malloc(5 * sizeof(int));
    }

    for(i=0; i<4; i++)
    {
        printf("%d 번재 행의 값 5개를 입력해주세요\n",i+1);
        for(j=0; j<5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
    
    
    return 0;
}