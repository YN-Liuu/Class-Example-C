#include "stdio.h"
#define NUM 10
int main(){
    setbuf(stdout,NULL);
    int i,j,t,a[NUM];
    printf("input 10 nums:\n");
    for (i = 0; i < NUM; i++) {
        scanf("%d",&a[i]);
    }
    for (j = 0; j < NUM-1; j++) {
        for ( i = 0; i< NUM-j-1; ++i) {
            if(a[i]>a[i+1]){
                t = a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("the sorted nums: \n");
    for (i = 0; i < NUM; ++i){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}


#include <stdio.h> // 标准输入输出头文件的正确写法是 <stdio.h>
#include <math.h> // 数学函数头文件的正确写法是 <math.h>

int main() { // main 函数应该返回 int 类型
    float a, b, c, disc, x1, x2, p, q;
    // 提示用户输入系数
    printf("请输入一元二次方程的系数 a, b, c: ");
    // 读取用户输入的系数
    scanf("%f, %f, %f", &a, &b, &c);
    // 计算判别式
    disc = b * b - 4 * a * c;
    // 判断判别式的值
    if (disc < 0) {
        printf("方程没有实数根。\n");
    } else {
        // 计算根
        p = -b / (2 * a);
        q = sqrt(disc) / (2 * a);
        x1 = p + q;
        x2 = p - q;
        // 打印根
        printf("x1 = %5.2f\nx2 = %5.2f\n", x1, x2);
    }
    return 0; // 返回 0 表示程序正常结束
}