//求坐标象限
#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int x,y;
    printf("input a x,y 坐标:");
    scanf("%d,%d", &x,&y);
    if(x>0){
        if(y>0){
            printf("属于第一象限\n");
        }
        else if(y<0){
            printf("属于第四象限\n");
        }
        else
            printf("位于正半轴\n");
    }else if (x<0){
       if(y<0) {
           printf("属于第三象限\n");
       }
       else if(y>0){
           printf("属于第二象限\n");
       }
       else{
           printf("位于负半轴\n");
       }
    }
    else{
        if(y>0){
            printf("位于正半轴\n");
        }
        else if(y <0){
            printf("位于负半轴\n");
        }
        else{
            printf("属于原点\n");
        }

    }
}