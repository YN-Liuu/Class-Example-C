#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int count=0,number;
    printf("input a num");
    scanf("%d",&number);
    if (number<0)
        number = -number;
    do {
        number= number/10;
        count++;
    }
    while (number!=0);
    printf("%d address",count);
}