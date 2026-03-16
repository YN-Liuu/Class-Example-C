//#include "stdio.h"
//void main(){
//    int i,j;
//    for (i = 1;  i<=9 ; i++) {
//        for ( j = 1; j <=i ; ++j) {
//            printf("%d*%d=%2d\t",i,j,i*j);
//        }
//        printf("\n");
//    }
//}

#include "stdio.h"
void main(){
    int i,j;
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <=i ; ++j) {
            printf("%d*%d =%2d\t",i,j,i*j);
        }
        printf("\n");
    }
}