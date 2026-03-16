#include "stdio.h"
#include "math.h"
int main() {
    float a, b, c, x1, x2, disc, p, q;  // 将变量改为double类型
    printf("please input a, b, c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);  // 将格式控制符改为%lf
    disc = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(disc) / (2 * a);  // 修改计算q的表达式
    x1 = p + q;
    x2 = p - q;
    printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);  // 修改输出格式控制符
    return 0;
}




