#include <stdio.h>

struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};
void print_str(struct address *p, int count);

int main(void)
{
    struct address list[5] = {
        {"Lee", 23, "111-1111","Newyok"},
        {"Kim", 26, "222-2222","Dokdo"},
        {"Park", 33, "333-3333","Japan"},
        {"Yu", 21, "444-4444", "LA"},
        {"Ha", 44, "555-5555", "Singpore"}
    };
    int count = sizeof(list) / sizeof(list[0]);

    print_str(list, count);

    return 0;

}

void print_str(struct address *p, int count)
{
    int i;

    for(i=0; i<count; i++)
    {
        printf("%5s%5d%10s%10s\n",p[i].name,p[i].age,p[i].tel,p[i].addr);
    }
}