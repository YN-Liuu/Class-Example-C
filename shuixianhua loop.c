#include <stdio.h>
void main() {
//    setbuf(stdout,NULL);
    int i = 100, a, b, c;
//    printf("please input three nums:\n");
//    if(i < 1000)
//    {
//        i++;
//        a = i%10;
//        b = i%100/10;
//        c = i/100;
//        if (a*a*a+b*b*b+c*c*c==i){
//            printf("%d\n",i);
//        }
//        printf("%d\n",i);
//    }
    while (i > 100 && i <= 999);
    a = i / 100;
    b = i / 10 % 10;
    c = i % 10;
    if (a * a * a + b * b * b + c * c * c == i) {
        printf("%d\n", i);
    }
    i++;
//    printf("%d",i);
}
输入两个正整数，输出最大公约数和最小公倍数