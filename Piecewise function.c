//#include "stdio.h"
//void main() {
//    setbuf(stdout, NULL);
//    int x, y;
//    printf("input a x:");
//    scanf("%d", &x);
//    if (x >= 1 && x < 10) {
//
//        y = 2 * x - 1;
//    }
//    else if (x < 1) {
//        y = x;
//    }
//    else if (x >= 10) {
//        y = 3 * x - 11;
//    }
//    printf("y = %d", y);
#include "stdio.h"
void main(){
    setbuf(stdout,NULL);
    int x,y;
    printf("input a x:");
  scanf("%d", &x);
 /* if(x>=10){
      y = 3*x-11;
  }
  else if(x>=1){
      y = 2*x-1;
  }
  else
      y = x;
}*/
 /*
 if(x<1){
    y = x;
 }
 else if(x<10){
     y = 2*x-1;
 }
 else
     y = 3*x-11;
}*/
 /*
 if(x>=1){
     if(x>=10){
         y = 3*x-11;
     }
     else{
         y = 2*x-1;
     }
 }
 else
     y = x;
}*/

 if(x>=10){
     y = 3*x-11;
 }else{
     if(x<1){
         y = x;
     }else{
         y = 2*x-1;
     }
 }
    printf("y = %d",y);
}