#include <stdio.h>

typedef struct 
{
    int num; 
    char name[20];
} Student;

void print_data(Student *plist);

int main(void)
{
    Student list[2] = {{20, "lee"},{40,"kim"}};

    /*for(i=0; i<count; i++)
    {
        printf("%d %s\t",list[i].num,list[i].name);
    }*/
    //printf("%d",sizeof(list[0]));
    print_data(list);

    return 0;
}

void print_data(Student *plist)
{
    int i;
    int count = sizeof(plist) / sizeof(plist[0]);
    printf("%d",count);

    for(i=0; i<count; i++)
    {
        printf("%d %s",plist[i].num,plist[i].name);
    }
}
    