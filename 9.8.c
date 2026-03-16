#include "stdio.h"
void main(){
    int a[5],i,*p = a;
for (i = 0; i < 5;)
{
*p = i;
printf("a[%d]=%d\n",i++,*(p++));
}
}