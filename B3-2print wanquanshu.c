#include "stdio.h"
void judge(int n){
    for (int i = 1; i <=n ; ++i) {
        int sum = 0;
        for (int j = 1; j <i ; ++j) {
            if(i%j==0){
                sum+=j;
            }
        }
        if(sum==i){
            printf("%d\n");
        }
    }
    printf("\n");
}
int main(){
    int n;
    printf("input n:\n");
    scanf("%d",&n);
    if(n<0){
        printf("false\n");
    }else{
        printf("true\n");
        judge(n);
    }
    return 0;
}