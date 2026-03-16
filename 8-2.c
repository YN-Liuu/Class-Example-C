#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
    int max,a[10];
    printf("input tens nums: ");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d",a[i]);
    }
    printf("\n");
    max= a[0];
    for (int i = 0; i < 10; ++i) {
        if(a[i]>max)
            max=a[i];
    }
    printf("max = %d ",max);
    return 0;
}