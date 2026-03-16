#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
    int a[3][2],b[3][2],c[3][2];
    printf("输入a的6个元素：");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf(" %d",&a[i][j]);
        }
    }
    printf("数组a[3][2]:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf(" %5d",a[i][j]);
        }
        printf("\n");
    }
    printf("数组b6个元素:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf(" %d",&b[i][j]);
        }
    }
    printf("数组b[3][2]:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf(" %5d",b[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("数组c[3][2]:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf(" %5d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}