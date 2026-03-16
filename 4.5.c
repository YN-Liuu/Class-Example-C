//四个数逆序输出
#include <stdio.h>
void main()
{
    setbuf(stdout,NULL);
    int a,b,c,d,num;
    printf("请输入一个4位数：");
    scanf("%d",&num);//6543
    a = num/1000;//6，543
//    printf("output a = %d\n",a);
    b = num%1000/100;//5，43
//    printf("output b = %d\n",b);
    c = num%100/10;//4，3
//    printf("output c = %d\n",c);
    d = num%10;//3
//    printf("output d = %d\n",d);
    printf("逆序输出千位：%d\n",d);
    printf("逆序输出百位：%d\n",c);
    printf("逆序输出十位: %d\n",b);
    printf("逆序输出个位: %d\n",a);
}