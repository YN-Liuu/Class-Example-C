#include "stdio.h"
int main(){
    int i ,a[10];
    for (int i = 0; i < 10; ++i)
        scanf("%d",&a[i]);
    for (int i = 0; i <10 ; ++i){
        printf("%d\t",a[i]);
    }
    return 0;
}