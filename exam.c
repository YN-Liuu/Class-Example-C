//成绩是否合格
#include <stdio.h>
void main()
{
    setbuf(stdout, NULL);
    float x;
    printf("请输入c语言成绩：");
    scanf("%f", &x);
    if (x > 100 || x < 0)
        printf("输入的成绩有误，再来一遍");
    if (x >= 60 && x <= 100)
        printf("c语言成绩合格");
    else
        printf("c语言成绩不合格");
}