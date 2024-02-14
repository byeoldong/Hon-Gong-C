#include <stdio.h>
#include <string.h>



int main(void)
{
    char name [3][10] = {"harry","robert","chris"};
    int i;

    for(i=0; i<3; i++)
    {
        printf("%s\n",name[i]);
    }

    return 0;
    

}