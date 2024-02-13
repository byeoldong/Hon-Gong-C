#include <Stdio.h>

int main(void)
{
    int a;
    char ch;
    double f;
    char d[10];

    scanf("%d%c%lf%s",&a,&ch,&f,d);
    printf("%d\n%c\n%lf\n%s",a,ch,f,d);
    
    return 0;
}