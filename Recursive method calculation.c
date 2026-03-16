//#include "stdio.h"
//long fact(int n);
//void main(){
//    int n;
//    long y;
//    printf("\ninput a num:\n");
//    scanf("%d",&n);
//    y = fact(n);
//    printf("%d!= %ld\n",n,y);
//}

#include "stdio.h"
long fact(int n) {
    long f;
    if (n < 0) {
        printf("输入错误\n");
    } else {
        if (n == 0 || n == 1)
            f = 1;
        else f = fact(n - 1) * n;
        return f;
    }
}
void main(){
    int n;
    long f;
//    setbuf(stdout,NULL);
    printf("please input a num:\n");
    scanf("%d\n",&n);
    f = fact(n);
    printf("%d! = %ld",n,f);
}