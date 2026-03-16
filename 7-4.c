#include "stdio.h"
#include "example.c"
void main(){
    int a,b,max;
    setbuf(stdout,NULL);
    printf("please input nums:");
    scanf("%d,%d",&a,&b);
    max = getMax(a,b);
    printf("max=%d",max);
}