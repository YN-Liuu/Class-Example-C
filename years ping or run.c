#include <stdio.h>
void main()
{
    setbuf(stdout,NULL);
    int x;
    printf("input a year: ");
    scanf("%d",&x);
    if((x%4==0&&x%100!=0)||x%400==0)
    {
        printf("输入数为run年：%d",x);
    }
    else{
        printf("输入数为ping年：%d",x);
    }
}