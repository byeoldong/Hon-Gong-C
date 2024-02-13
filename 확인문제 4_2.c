#include <stdio.h>

int main(void)
{ 
    int seats = 70;
    int audience = 65;
    double rate;

    rate = ( (double) audience / seats ) * 100;

    printf("입장률 : %.1lf%c", rate, '%'); // %가 안찍히는데 뭐가 문제지.. 따로 문자로 넣어줘야됨.or %%로 작성

    return 0;
    
}
   

