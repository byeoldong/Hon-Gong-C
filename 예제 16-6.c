#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    while(*argv != NULL)
    {
        printf("argc : %d, argv : %s\n", argc, *argv);
        argv++;
    }

    return 0;
}