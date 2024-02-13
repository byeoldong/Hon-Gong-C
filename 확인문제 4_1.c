#include <stdio.h>

int main(void)
{
    int res;
    
    res = (sizeof(short) > sizeof(long) ) ? 1 : 0;

    //res == 1 ? printf("short") : printf("long");
    printf("%s\n", (res == 1) ? "short" : "long");
    
    return 0;
}