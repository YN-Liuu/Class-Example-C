#include <stdio.h>
int main(){
    setbuf(stdout,NULL);
    int i,x,y,z;
    printf("input three nums:\n");
    for (int i = 100; i < 1000; ++i) {
        x = i%10;
        y = i%100/10;
        z = i/100;
        if(x*x*x+y*y*y+z*z*z==i){
            printf("%d\t",i);
        }
    }
    return 0;
}

