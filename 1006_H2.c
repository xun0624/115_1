#include <stdio.h>
int main()
{
    int height;
    printf("請輸入身高");
    scanf("%d",&height);
    if (height>=120)
    {
        printf("可以搭乘");
    }
    else
    {
        printf("不能搭乘");
    }
    return 0;
}