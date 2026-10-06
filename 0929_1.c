#include <stdio.h>
int main()
{
    float 底;
    float 高;
    float 面積;
    printf("請輸入三角形的底:");
    scanf("%f",&底);
    printf("請輸入三角形的高:");
    scanf("%f",&高);
    printf("三角形面積:%.2f",面積=底*高/2);
    return 0;
}