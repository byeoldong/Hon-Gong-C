#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[20] = "empty";
    int ch;

    fp = fopen("a.txt", "r");
    ch = fgetc(fp); //ch = 'a';
    while(fgetc(fp) != '\n'); //fgetc(fp) = '\n'인 상태 그럼 그 다음부터 fgets 작동.
    //fp가 끝을 가리키고 있다.
    //fseek(fp,1,SEEK_CUR);

    if(fgets(str,sizeof(str),fp)==NULL) printf("파일을 다 읽었습니다\n"); //fp = NULL
    
    printf("%s", str);
    printf("%c",ch);
    fclose(fp);

    return 0;
}