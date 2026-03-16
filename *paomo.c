#include "stdio.h"
#define NUM 10
int main() {
    int i, j, t, a[NUM];
    printf("input 10 nums:\n");
    for (i = 0; i < NUM; i++) {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < NUM - 1; j++) {
        for (i = 0; i < NUM - j - 1; i++) {
            if (a[i] > a[i + 1]) {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
    printf("the sorted nums: \n");
    for (i = 0; i < NUM; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}