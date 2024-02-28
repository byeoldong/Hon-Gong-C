#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    int *pn;
    int i,j;

    printf("양수 입력 : ");
    scanf("%d",&num);
    pn = (int *)malloc((num-1) * sizeof(int));

    if(pn == NULL)
    {
        printf("메모리 부족!\n");
        exit(1);
    }

    for(i=0; i<num-1; i++)
    {
        pn[i] = i + 2;
    }

    for(i=0; i<num-2; i++)
    {
        while((pn[i] == 0) && (i < num-2))
        {
            i++;
        }
        
        if(i == num-2) break;
        

        for(j=i+1; j<num-1; j++)
        {
            if(pn[j] % pn[i] == 0)
            {
                pn[j] = 0;
            }
        }
        
    }

    for(i=0; i<num-1; i++)
    {
        if(pn[i] == 0) printf("%5c",'X');
        else printf("%5d",pn[i]);

        if((i+1) % 5 == 0) printf("\n");
    }
    

    free(pn);

    return 0;


}