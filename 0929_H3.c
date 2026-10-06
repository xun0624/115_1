#include <stdio.h>
int main()
{
    int 客廳=9;
    int 臥室=5;
    int 廚房=2;
    int status=13;
    printf("目前客廳設備:%d\n",status&客廳);
    printf("目前臥室設備:%d\n",status&臥室);
    printf("目前廚房設備:%d\n",status&廚房);
    printf("%d\n",status^廚房);
    return 0;
}