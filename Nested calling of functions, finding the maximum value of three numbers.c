#include "stdio.h"
int max_num(int x,int y)
{
    return (x>y? x:y);
}
int min_num(int x,int y)
{
    return (x<y? x:y);
}


void main(){
    setbuf(stdout,NULL);
    int x,y, z ,max,min;
    printf("please input three num");
    scanf("%d,%d,%d",&x,&y,&z);
    max = max_num(max_num(x,y),z);
    printf("max  = %d\n",max);
    min = min_num(min_num(x,y),z);
    printf("min = %d\n",min);
}
//printf("max  = %d\n",max_num(max_num(x,y),z));
//    printf("min = %d\n", min_num(min_num(x,y),z));