//算法初步
#include <stdio.h>
void main(){
    int x,c;
    c = 2;
    x = 8;
    while(x<=5)
    { c = c*x;
        x = x + 1;
    }
    printf("%d\n",c);
}