//#include "stdio.h"
//void main(){
//    int i ,j, s = 0;
//    int a[4][4]={{1,2,3,7},{4,5,6,8},{7,8,9,10},{22,33,44,55}};
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            if(i==j)
//                s = s+a[i][j];
//        }
//    }
//    printf("sum = %d\n",s);
//}
#include "stdio.h"
void main() {
    int n, t;
    int a[6][6];
    printf("enter n:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            a[i][j] = i * n + j + 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i <= j) {
                    t = a[i][j];
                    a[i][j] = a[j][i];
                    a[j][i] = t;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("  %d", a[i][j]);

        }
        printf("\n");}
}