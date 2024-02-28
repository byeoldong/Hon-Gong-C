#include <stdio.h>

void print_list(int *pl);

int main(void)
{
    int list[5] = {1, 2, 3, 4, 5};

    print_list(list);

    return 0;
}

void print_list(int *pl)
{
    int i, count;
    count = sizeof(pl)/sizeof(pl[0]);
    printf("%d\n",sizeof(pl));
    printf("%d\n",sizeof(pl[0]));
    printf("%d\n",sizeof(pl)/sizeof(pl[0]));
    printf("%d",count);

    for(i=0; i<count; i++)
    {
        printf("\n");
        printf("%d\n",pl[i]);
    }
}