#include "stdio.h"
int main(){
    setbuf(stdout,NULL);
    int i,j,a[3][5] ,s = 0,v[3],average;
    printf("please input nums:\n");
    for (int i = 0; i <3; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
        v[i]=s/5;
        s = 0;
    }
   average = (v[1]+v[2]+v[3])/3;
    printf("Math = %d\nC = %d\nEnglish = %d\n",v[0],v[1],v[2]);
    printf("total average is = %d\n",average);
}