#include "stdio.h"
int main(){
    int x = 1,sum = 0;
    while (x<=100){
        sum = sum + x;
        printf("sum = %d\n",sum);
//        printf("%d",x);
        x = x + 2;
    }
//    ruturn 0;
    printf("sum = %d\n",sum);
}