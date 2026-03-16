//输出整数
#include <stdio.h>
void main(){
    int a = 888888,b = 89;
    printf("%4d%,4o\n",a,b);
    printf("% + 4hd,% -4d\n",a,b);
    printf("%04d,% -04d\n",a,b);
    printf("a = %d,b = %d\n",a,b);
}