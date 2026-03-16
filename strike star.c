//#include "stdio.h"
//int main(){
//    int w,h;
//    printf("input two word :");
//    scanf("%d,%d",&w,&h);
//    for (int i = 0; i < w; i++){
//            for (int j = 1; j <h ; j++){
//                printf("*");
//            }
//        printf("*\n");
//    }
//1111
//#include "stdio.h"
//int main(){
//    for (int i = 1; i <=9 ; i++)
//    {
//        for (int j = 1; j <=i; j++)
//        {
//            printf("*",i,j,i*j);
//        }
//        printf("\n");
//    }
//22222
//#include "stdio.h"
//int main(){
//    for (int i = 1; i<=9 ; i++)
//    {
//        for (int j = 9; j>=i; j--)
//        {
//            printf("*",i,j,i*j);
//        }
//        printf("\n");
//    }
//}
//333333
//#include "stdio.h"
//int main() {
//    for (int i = 1; i <= 9; i++) {
//        for (int k = 8 - i; k > 0; --k) {
//            printf(" ");}
//            for (int j = 1; j <= i; j++) {
//                printf("*");}
//            printf("\n");
//        }
//    }
//444444
#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
  int i=0,j=0;
//    scanf("%d",&n);
    for (int i = 5; i>=1 ;i--){
        for (int j = i;j<=i;++j) {
            printf("*");
        }
        printf("\n");
    }
}
//55555