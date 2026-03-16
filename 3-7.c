//按格式控制字符串要求输出浮点型小数和字符型数据
#include <stdio.h>
void main()
{
    int a = 15;
    float b = 123.134567f;
    double c = 12345678.1234567;
    char d = 'p';
    printf("a = %d,%5d,%o,%X\n",a,a,a,a);
    printf("b = %f,%1f,%5.4lf,%e\n",b,b,b,b);
    printf("c = %1f,%f,%8.4lf\n",c,c,c);
    printf("d = %c,%8c\n",d,d);
}