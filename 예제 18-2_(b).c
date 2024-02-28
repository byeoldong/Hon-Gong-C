#include <stdio.h>

int main(void)
{
    FILE *fp, *ofp;
    int ch;
    int ans;

    fp = fopen("a.txt","r");
    
    if(fp==NULL)
    {
        printf("파일이 열리지 않았습니다.");
        return 1;
    }

    if(fopen("b.txt","r") != NULL) 
    {
        printf("같은 이름의 파일이 있습니다\n");
        printf("덮어씌우겠습니까? NO: 0 YES: 1 입력\n");
        scanf("%d",&ans);
        if(ans == 0) return 1;
    } //이미 파일이 있는 경우 덮어씌울지 말지 결정

    ofp = fopen("b.txt","w");
    if(ofp==NULL)
    {
        printf("파일이 열리지 않았습니다.");
        return 1;
    }

    ch = fgetc(fp);

    while(ch != EOF)
    {
        fputc(ch,ofp);
        ch = fgetc(fp);
    }

    fclose(ofp);

    ofp = fopen("b.txt","r");
    
    if(ofp==NULL)
    {
        printf("파일이 열리지 않았습니다.");
        return 1;
    }

    while(1)
    {
        ch = fgetc(ofp);
        if(ch == EOF) break;
        putchar(ch);
    }

    fclose(fp);
    fclose(ofp);

    return 0;
}