//#include "stdio.h"
//#define p printf
//#define D "%d\n"
//#define F "%f\n"
//void main(){
//    int a = 5,c = 8,e = 11;
//    float b = 3.8,d = 9.7,f = 21.08;
//    p(D F,a,b);
//    p(D F,c,d);
//    p(D F,e,f);
//}
//#include <stdio.h>
//#define MAX(a,b) (a>b)?a:b
//void main(){
//    setbuf(stdout,NULL);
//    int x,y,max;
//    printf("input nums: ");
//    scanf("%d%d",&x,&y);
//    max=getMAX(x,y);
//    printf("max= %d\n",max);
//}
#include "stdio.h"
void main()
{
    int x,y,max;
    printf("input nums:");
    scanf("%d%d",&x,&y);
    max=(x>y)?x:y;
    printf("max = %d\n",max);
}