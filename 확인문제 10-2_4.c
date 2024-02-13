#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);
    return 0;
}

void input_nums(int *lotto_nums)
{
    int i,j;
    int num;
    int dup;

    for(i=0; i<6; i++)
    {
        printf("번호 입력 : ");
        scanf("%d",&num);
        dup = 0;
        for(j=0; j<i; j++)
        {
            if(num == lotto_nums[j])
            {
                dup = 1;
                break; // 반복문 탈출
            }
        }
        if(!dup)
        {
            lotto_nums[i] = num;
        }
        else
        {
            printf("같은 번호가 있습니다.\n");
            i--; // 같은 번호가 아닐 때까지 입력받기 위해
        }
    }
}

void print_nums(int *lotto_nums)
{
    int i;

    printf("로또 번호 : ");
    for(i=0; i<6; i++)
    {
        printf("%d ", lotto_nums[i]);
    }
}