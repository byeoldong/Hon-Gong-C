#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **matrix = (int **)malloc(3 * sizeof(int *));
    int i, j;

    for(i=0; i<3; i++)
    {
        matrix[i] = (int *)malloc(3 * sizeof(int));
        for(j=0; j<3; j++)
        {
            printf("matrix[%d][%d] : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}