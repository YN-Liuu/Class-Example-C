#include "stdio.h"
void sort(int a[],int n){
    int i,j,k,t;
    for (int i = 0; i <n-1; ++i) {
        k = i;
        for (int j = 0; j < j+1; ++j){
            if( a[j]<a[k]){
                k = j;
            }
        }
//        if(k!=i){
//            t = a[k];
//            a [k] = a [i];
//            a [i] = t;
//        }
    }
}
void main(){
    setbuf(stdout,NULL);
    int array[10],i;
    printf("enter the array\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&array [i]);
        sort(array,10);
    }
    printf("the sorted array:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%5d",array [i]);
        printf("\n");
    }
}