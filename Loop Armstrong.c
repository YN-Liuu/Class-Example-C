#include "stdio.h"
#include "math.h"
void main()
{
    int a,b,c,sum;
    for (int a = 1; a < 9; ++a) {
        for (int b = 0; b < 9; ++b) {
            for (int c = 0; c < 9; ++c) {
                sum = a*100+b*10+c;
                if(sum== pow(a,3)+ pow(b,3)+ pow(c,3))
                    printf("%d  ",sum);
            }
        }
    }
}