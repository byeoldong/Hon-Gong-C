#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    FILE *fp;
    char str_f[20];

    fp = fopen("f.txt","a+");

    while(1)
    {
        printf("문자열을 입력하세요 : ");
        scanf("%s",str);
        if(strcmp(str,"end") == 0) 
        {
            break;
        }
        else fprintf(fp,"%s\n", str);
    }
    
    rewind(fp); 
    
    while(1)
    {
        fgets(str_f,sizeof(str_f), fp);
        if(feof(fp)) 
        {
            break;
        }
        printf("%s",str_f);
    } 

    fclose(fp);

    return 0;
}