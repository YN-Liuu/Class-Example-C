#include <stdio.h>
void main()
{
    setbuf(stdout,NULL);
    int num;
    printf("请输入一个数：\n",&num);
    scanf("%d",&num);
    if(num%2){
        printf("是个奇数：%d",num);
    }
    else{
        printf("是个偶数：%d",num);
    }
}