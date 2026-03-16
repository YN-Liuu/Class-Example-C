#include "stdio.h"
int main(){
    int a[5],max = 0,sum = 0;
    printf("please input five nums:\n");
    float average ;
    for (int i = 0; i < 5; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; ++i) {
        if(a[i]>max){
            max = a[i];
            sum+=a[i];
        }
    }
    average = sum*1.0/5;
    printf("max = %d,average =%f",max,average);
}