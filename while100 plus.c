#include "stdio.h"
void main(){
    int sum = 0,i;
    printf("give a num :");
    scanf("%d",&i);
    while (i<=10){
        sum = sum +i;
        i++;
    }
    printf("sum = %d\n",sum);
}