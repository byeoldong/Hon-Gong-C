#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char str[20];

    fp = fopen("g.txt","a+");
    if(fp ==NULL)
    {
        printf("파일을 만들지 못했습니다.\n");
        return 1;
    }

    while(1)
    {
        printf("과일 이름: ");
        scanf("%s", str);
        if(strcmp(str,"end") == 0)
        {
            break;
        }
        else if(strcmp(str, "list") == 0)
        {
            fseek(fp, 0 , SEEK_SET);
            while(1)
            {
                fgets(str,sizeof(str),fp);
                if(feof(fp))
                {
                    break;
                }
                printf("%s",str);
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);
            //fputs(str, fp);
            //fputs("\n", fp);
        }
        
    }

    fclose(fp);

    return 0;
}