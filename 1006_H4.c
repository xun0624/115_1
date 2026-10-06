#include <stdio.h>
int main()
{
    int login;
    int balance;
    int amount;
    int black;
    printf("請輸入登入狀態1登入0登入:");
    scanf("%d",&login);
    printf("請輸入餘額:");
    scanf("%d",&balance);
    printf("請輸入提款金額:");
    scanf("%d",&amount);
    printf("請輸入黑名單狀態1是0否:");
    scanf("%d",&black);
    if(login==1 && balance>=amount && black==0)
    { 
        printf("可以提款");
    }
    else
    {
         printf("不可提款");
    }     
    return 0;
}