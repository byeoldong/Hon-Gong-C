#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *a_fp,*b_fp, *c_fp;
    char str_a[21],str_b[21],str_c[21];
   
    a_fp = fopen("a.txt","r");
    b_fp = fopen("b.txt","a+");
    c_fp = fopen("c.txt","a+");

    if(a_fp == NULL)
    {
        printf("a_파일이 열리지 않았습니다.");
        return 1;
    }

    if(b_fp == NULL)
    {
        printf("b_파일이 열리지 않았습니다.");
        return 1;
    }

    if(c_fp == NULL)
    {
        printf("c_파일이 열리지 않았습니다.");
        return 1;
    }

    while(1)
    {
        scanf("%s",str_b);
        if(strcmp(str_b,"end") == 0) break;
        fprintf(b_fp,"%s\n",str_b);
    }
    
    rewind(b_fp);

    while(1)
    {
        if(feof(b_fp)) break;
        
        fscanf(b_fp, "%s", str_b);
        
        while(1)
        {
            fscanf(a_fp, "%s", str_a);
            if( feof(a_fp) || (strcmp(str_a,str_b) == 0)) break;
        }
        rewind(a_fp);
        
        if(strcmp(str_a,str_b) != 0)
        {
            fprintf(c_fp,"%s\n",str_b);
        }
    }
    rewind(c_fp);

    while(1)
    {
        fscanf(c_fp,"%s",str_c);
        if(feof(c_fp)) break;
        printf("%s\n",str_c);
    }

    fclose(a_fp);
    fclose(b_fp);
    fclose(c_fp);

    return 0;
}