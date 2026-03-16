//我们说转置就是把ij互换（for中的，其次就是输出的[i][j]互换;
#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
   int a[3][2]={{1,2},{3,4},{5,6}};
   int b[3][3]={11,22,33,44,55,66,77,88,99};
    printf("数组[3][2]:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf(" %2d",a[j][i]);
        }
        printf("\n");
    }
    printf("数组[3][3]:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf(" %2d",b[j][i]);
        }
        printf("\n");
    }
    return 0;
}