//一维数组的定义与输出
#include "stdio.h"
int main(){
    char c[]={'c','p','r','o','g','r','a','m'};
    for (int i = 0; i < 8; ++i) {
        printf("%c",c[i]);
    }
    printf("\n");
    char a[][5] = {{'b','a','s','i','c'},{'d','b','a','s','e'}};
    for (int i = 0; i <=1; ++i) {
        for (int j = 0; j <=4 ; ++j) {
            printf("%c",a[i][j]);
        }printf("\n");
    }
    //字符串的定义与输出
    char x[]= "x program";
    printf("%s",x);
    return  0;
}