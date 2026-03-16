#include "stdio.h"
int main ()
{
    setbuf(stdout,NULL);
    float score ;
    float max = 0,min = 100;
    printf("please input some nums: \n");
    while (scanf("%f",&score)!=EOF&&score!= -1)
        if(max <score){
            max = score;
        }
    if(min>score){
        min = score;
    }
    printf("max = %.1f,min = %.1f",max,min);
}