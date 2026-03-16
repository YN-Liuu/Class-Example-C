//字符变量与整数进行运算
#include <stdio.h>
void main()
{
    char ch1,ch2,ch3,ch4;
    ch1 = 'a';
    ch2 = 'b';
    ch3 = '3';
    ch4 = '4';
    ch1 = ch1-32;
    ch2 = ch2-32;
    ch3 = ch3+64;
    ch4 = ch4+32;
    printf("%c,%c\n%d,%d\n",ch1,ch2,ch3,ch4);
}