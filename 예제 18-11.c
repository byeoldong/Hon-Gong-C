#include <stdio.h>

int main(void)
{
    FILE *afp, *bfp;
    int num = 10;
    int res;

    afp = fopen("a.txt","wt");
    fprintf(afp,"%d",num); //아스키코드 값으로(문자)로 변환해서 출력 2바이트

    bfp = fopen("b.txt","wb");
    fwrite(&num, sizeof(num), 1, bfp); //숫자면 2진수 그대로 출력 (4byte)

    fclose(afp);
    fclose(bfp);

    bfp = fopen("b.txt","rb"); //fread,fwrite는 바이너리 파일로 열고 닫아줘야 한다.
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);

    return 0;


}