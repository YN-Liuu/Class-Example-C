#include <stdio.h>
#include <math.h>
void main()
{
    setbuf(stdout,NULL);
    char c1,c2;
    c1 = getchar();
    printf("please a word:\n");
    printf("%c,%d\n",c1,c1);
    c2 = c1 +32;
    printf("%c,%d\n",c2,c2);
}