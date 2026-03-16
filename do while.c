#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int i = 1,sum = 0;
    do{
        sum = sum + i;
        i++;
    } while (i <=100);
    {
        printf("%d\n",sum);
    }
}