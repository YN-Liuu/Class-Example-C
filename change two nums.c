#include "stdio.h"
void main(){
    void swap(int a,int b);
    int a,b;
    printf("int two nums:");
    scanf("%d%d,&a&b");
    printf("调用前：a = %d,b = %d\n",a,b);
    swap(a,b);
    printf("调用后：a = %d,b = %d\n",a,b);
}
void swap(int a,int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("swap函数🀄:a = %d,b = %d\n",a,b);
}