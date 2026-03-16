// 若干鸡兔在一个笼子，上面数有35个头，从下面数有94只脚，问笼中各有多少只鸡和兔？
#include "stdio.h"
void main() {
    int x, y;
    for (int x = 1; x <= 94; ++x) {
        for (int y = 1; y <= 47; ++y) {
                if (x+y=35&&2*x+4*y==94)
                    printf("x=%d ,y= %d\n", x, y);
        }
    }
}