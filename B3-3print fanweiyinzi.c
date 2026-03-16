#include <stdio.h>
void judge(int x, int y) {
    for (int i = x; i <= y; ++i) {
        printf("%d的因子为: ", i); // 在打印因子前添加数字，使其更清晰
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                printf("%d ", j); // 在打印因子后添加空格，使其更易读
            }
        }
        printf("\n"); // 在打印完一个数的因子后换行
    }
    printf("\n"); // 在所有因子打印完毕后再换行
}

int main() {
    int a, b;
    printf("input fanwei:\n");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("input not true\n");
    } else {
        judge(a, b);
    }
    return 0; // 程序正常结束返回0
}