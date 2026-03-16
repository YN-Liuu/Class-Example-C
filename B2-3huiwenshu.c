////回文数，12321，判断输入一个五位数，是否为回文数//水仙花数
//#include <stdio.h>
//
//int main() {
//    int num;
//    printf("请输入一个五位数：\n");
//    scanf("%d", &num);
//
//    // 判断是否为回文数
//    int digits[5];
//    int temp = num;
//    for (int i = 4; i >= 0; i--) {
//        digits[i] = temp % 10;
//        temp /= 10;
//    }
//    if (digits[0] == digits[4] && digits[1] == digits[3]) {
//        printf("%d 是回文数\n", num);
//    } else {
//        printf("%d 不是回文数\n", num);
//    }
//}

#include "stdio.h"
int judge(int n){
    int num;
    printf("input a num:\n");
    scanf("%d",&num);
    int div[5];
    int temp = num;
    for (int i = 1; i <=4 ; --i) {
        div[i] = temp%10;
        temp/=10;
    }
    if(div[1]==div[3]&&div[0]==div[4]){
        printf("the num is true\n");
    }else{
        printf("false\n");
    }
    return 0;
}