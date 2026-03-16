#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int m,i;
    printf("input a word :");
    scanf("%d",&m);
    for (i = 2; i<=m/2;i++) {
        if(m%i==0)
            break;
    }
    if(i>m/2){
        printf("%d is sushu",m);
    }
    else{
        printf("%d is not sushu",m);
    }
}