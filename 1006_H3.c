#include <stdio.h>
int main()
{
    int score;
    int 出席率;
    printf("請輸入成績:");
    scanf("%d",&score);
    if (score>=60)
    {
         printf("請輸入出席率:");
         scanf("%d",&出席率);
        if(出席率>=80)
        {
            printf("可");
        }
        else
        {
        printf("不可");
        }
    }
    else
    {
        printf("不可");
    }
    return 0;
}