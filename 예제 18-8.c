#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *ifp, *ofp;
    char str[80];
    char *res; //fgets는 성공하면 그 문자열을 가리키는 주소를 반환, 실패하면 -1(eof) 반환

    ifp = fopen("a.txt", "r");
    if(ifp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    ofp = fopen("b.txt","w");
    if(ofp == NULL)
    {
        printf("출력 파일을 열지 못했습니다.\n");
        return 1;
    }

    while(1)
    {
        res = fgets(str,sizeof(str),ifp);
        //if(res==NULL) break;
        if(feof(ifp)) break; // 파일이 끝났으면 0이 아닌 값을 반환.
        str[strlen(str)-1] = '\0'; //'\n'까지 저장하므로 이를 nul문자로 바꿈. 한문장마다 하므로 매 문장 enter로 마무리 지어야 됨.
        fputs(str,ofp);
        fputs(" ",ofp);
    }
    fclose(ifp);
    fclose(ofp);

    return 0;

}