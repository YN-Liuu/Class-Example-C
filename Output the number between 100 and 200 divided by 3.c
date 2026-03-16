#include "stdio.h"
void main(){
    int i ;
    for (int i = 100; i <=200 ; ++i) {
        if(i%3!=0)
            continue;
        printf("%2d\t",i);
    }
}
//200之间能被5和7整除的数
//#include <stdio.h>
//void main(){
//    int i;
//    for (int i = 1; i <=200 ; ++i) {
//        if(i%5==0&&i%7==0)
//            printf("%2d\t",i);
//    }
//}