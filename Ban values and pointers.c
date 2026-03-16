#include "stdio.h"
int main(){
    int a = 10,b = 20;
//    int *pa = &a;
//    int *pb = &b;

    printf("%d\n",a);
    printf("%d\n",b);
   // printf("%x\n",&a);
    printf("a address is %d\nb address is %d\n",pa,pb);
    printf("a = %d,b =%d\n",*pa,*pb);
    printf("%d\n",*pa);
    printf("%d\n",*pb);
    printf("%d\n",&pa);
    printf("%d\n",&pb);
    printf("%d\n",*&pa);
    printf("%d\n",*&pb);
    return 0;
}