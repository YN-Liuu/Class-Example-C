//输出单个字符
#include <stdio.h>
void main()
{
    setbuf(stdout,NULL);
    char v;
    printf("please input a word: \n");
    v = getchar();
    putchar(v);
}